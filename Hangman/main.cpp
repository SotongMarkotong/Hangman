#include <iostream>
#include <vector>
#include <cmath>
#include "hangman.h"
using namespace std;

int main() {

    welcome();

    vector<string> animals = {  "dog", "elephant", "mouse", "lion", 
                                "orangutan", "cat", "rabbit", "moose",
                                "gorrila", "panda", "seal", "monkey"
                                "horse", "bison", "boar", "beaver"};
    string secret = pickRandomAnimal(animals);
    string answer = getPlaceHolder(secret);

    int mistakes = 0;
    vector<char> incorrects;
    bool guess = false;
    char guessed;

    while (mistakes <= 6 && answer != secret) {
        show(mistakes);
        progress(incorrects, answer);

        cout<<"\nEnter your guess: ";
        cin>>guessed;
        for(int i =0; i < secret.length();i++) {
            if(guessed == secret[i]) {
                guess = true;
                answer[i] = guessed;
            }
        }
        if(guess == true) {
            cout << "\n*-----------------------------*\n";
            cout<<"Correct guess!\n";
            cout << "*-----------------------------*\n";
        }
        else {
            if(!inIncorrects(guessed, incorrects)){
                incorrects.push_back(guessed);
                mistakes++;
                cout << "\n*-----------------------------*\n";
                cout<<"Incorrect Guess!\n";
            }
             else {
                cout << "\n*-----------------------------*\n";
                cout<<"Try another guess!\n";
                cout << "*-----------------------------*\n";
             }
        }   
        guess = false;
    }

    end(answer, secret);
    return 0;
}