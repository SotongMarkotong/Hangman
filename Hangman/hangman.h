#include <iostream>
#include <vector>
using namespace std;

// functions

// Welcome messages for topic and instructions
void welcome();

// Select a random animal(element) from the vector of animals
string pickRandomAnimal(vector<string> animals);

// Create the Answer string with underscores as a placeholder for the player to guess
string getPlaceHolder(string secret);

// Prints the current state of the hanged man
void show(int mistakes);

// Prints the current progress of the game, how many incorrect and correct tries
void progress(vector<char> incs, string ans);

// Prints the result of the game
void end(string ans, string guess);

// Checks if the guessed letter have already been tried or not
bool inIncorrects(char guessed, vector<char> incorrects);
