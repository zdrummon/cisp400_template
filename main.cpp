//===== libraries
#include <iostream>



//===== namespaces
using namespace std;



//===== prototypes
void StartProgram();
int ProgramBody();
int EndProgram(int);



//===== variables
const int TEN = 10;



//========================================================
int main() {
    
    StartProgram();

    return EndProgram(ProgramBody());
}
//========================================================



void StartProgram() {
//launch program and greet user

    int userChoice;
    cout << "Welcome to the pig game. Time to pig." << endl
        << "Do you wanna?" << endl;
    cin >> userChoice; 
}

int ProgramBody() {
//main program loop containing core logic

    int gameState = 1;

    cout << "The game has begun! Oink oink, bro." << endl;

    return gameState;
}

int EndProgram(int gameState) {
//exiting program and returning game values

    cout << "Thanks for pigging with me." << endl;

    return gameState;
}