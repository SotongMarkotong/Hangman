#include <iostream>
#include <vector>
#include <cstdlib>
#include "hangman.h"
using namespace std;

void welcome() {
    std::cout << "-------------------------------\n";
    std::cout << "WELCOME TO HANGMAN!\n";
    std::cout << "-------------------------------\n";
    std::cout << "Guess the word to save the man!\n";
    std::cout << "-------------------------------\n";
    std::cout << "HINT: The topic is animal!\n";
}

string pickRandomAnimal(vector<string> animals) {
    srand(time(NULL));
    int randIndex = rand() % animals.size();
    return animals[randIndex];
}

string getPlaceHolder(string secret) {
    string n;
    for (int i =0; i < secret.length(); i++) {
        n += "_";
    }
    return n;
}

void show(int mistakes) {
    switch(mistakes) {
        case 0:     
            cout<<"  _____ \n";
            cout<<"  |   | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
            break;
        case 1:     
            cout<<"  _____ \n";
            cout<<"  |   | \n";
            cout<<"  0   | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
            break;
        case 2:     
            cout<<"  _____ \n";
            cout<<"  |   | \n";
            cout<<"  0   | \n";
            cout<<"  |   | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
            break;
        case 3:     
            cout<<"  _____ \n";
            cout<<"  |   | \n";
            cout<<"  0   | \n";
            cout<<" /|   | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
            break;
        case 4:     
            cout<<"  _____ \n";
            cout<<"  |   | \n";
            cout<<"  0   | \n";
            cout<<" /|\\  | \n";
            cout<<"      | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
            break;
        case 5:     
            cout<<"  _____ \n";
            cout<<"  |   | \n";
            cout<<"  0   | \n";
            cout<<" /|\\  | \n";
            cout<<" /    | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
            break;
        case 6:     
            cout<<"  _____ \n";
            cout<<"  |   | \n";
            cout<<"  0   | \n";
            cout<<" /|\\  | \n";
            cout<<" / \\  | \n";
            cout<<"      | \n";
            cout<<" ========= \n";
            break;
    }
}

void progress(vector<char> incs, string ans){
    std::cout << "Incorrect tries: \n";

    for(int i = 0; i < incs.size(); i++) {
        std::cout << incs[i] <<" ";
    }

    std::cout <<"\nCorrect tries: \n";

    for(int i = 0; i < ans.length(); i++) {
        std::cout << ans[i]<< "";
    }
}

void end(string ans, string guess){
    if(ans == guess) {
        cout << "*-----------------------------*\n";
        cout<<"You saved the man, Congrats!\n";
        cout << "*-----------------------------*\n";
    }
    else {
        cout << "*-----------------------------*\n";
        cout<<"Bruh the man died cause you suck!\n";
        cout << "*-----------------------------*\n";
    }
}

bool inIncorrects(char guessed, vector<char> incorrects) {
    for (int i =0; i < incorrects.size(); i++) {
        if (incorrects[i] == guessed) {
            return true;
        }
    }
    return false;
}