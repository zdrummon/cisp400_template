//main.cpp
//Zachary Drummond, CISP 400
//09/01/2021



//===== libraries
#include <iostream>



//===== namespaces
using namespace std;



//===== prototypes
void ProgramGreeting();
void UnitTest();
int ProgramBody();
int EndProgram(int);



//===== variables
enum GameState { GameOver, GameRunning };



//========================================================
int main() {
    
    ProgramGreeting();
    UnitTest();

    return EndProgram(ProgramBody());
}
//========================================================



void ProgramGreeting() {
//launch program and explain what's going on

    cout << "Welcome to the  game of pig. It is time to play." << endl;
}


void UnitTest() {
//not sure what to do with this
}


int ProgramBody() {
//main program loop containing core logic

    int gameState = GameState::GameRunning;
    char userInput;

    while(gameState == GameState::GameRunning) {
    
        cout << "The game is running! Oink oink, bro. Press 0 to quit." << endl;

        cin >> userInput;

        if (userInput == '0' || userInput == '0') {
            gameState = GameState::GameOver;
        }
    }
    
    return gameState;
}


int EndProgram(int gameOutput) {
//this function is primarily for testing and logging errors, as well as feedback on exit

    cout << "Thanks for pigging with me, goodbye!" << endl;

    return gameOutput;
}

/*
"C" Specification Bundle.
// Specification C1 - Fixed Seed
Set the random number seed to a specific integer. That way, it will
always generate the same random number sequence - easier to fix
bugs that way.

// Specification C2 - Student Name
Allow name to accept first plus last name (ie 2 words). Display it
somewhere in the output.

// Specification C3 - Numeric Menu
Use a numeric menu to collect the human players actions. See
figure 1 for an example menu.

// Specification C4 - Bulletproof Menu
Detect and re-prompt if incorrect data (i.e. not 1, 2, or 3) is en-
tered.

"B" Specification Bundle.
// Specification B1 - Display Turn Stats
Keep track of the points each player scores each turn as well as the
overall points both sides have each turn in the game.

// Specification B2 - Display Due Date
Display the date this assignment is due in your program greeting
section.

// Specification B3 - Hi Score on Heap
Store the game’s high score in a variable in the heap. Don’t forget
to clean up after yourself before the program quits.

// Specification B4 – Display High Score
Display the value you stored in B3 on the console at the end of the
game.

"A" Specification Bundle.
// Specification A1 - D6() function
This method returns a randomly generated int between 1 and 6
every time it’s called. Replace the code which does that in your
assignment with this.

// Specification A2 - RandomNumber() function
Create a function which generates a random number between
arguments lo and hi.

// Specification A3 - Protect RandomNumber() input
Using an if statement, protect your RandomNumber() function from
bad data. Return a -1 error code if RandomNumber() receives bad
input. Argument rules are:
1. Hi must be greater than lo.
2. Lo cannot be less than 1.
3. Hi cannot be greater than 100.

// Specification A4 - Protect RandomNumber() output
Make sure your RandomNumer() function doesn’t send bad output.
Use an if statement before your return to make sure the random
number isn’t greater than 100. Return a -2 error code if you gener-
ate bad output.
*/