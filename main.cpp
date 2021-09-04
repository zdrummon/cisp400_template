// main.cpp
// Zachary Drummond, CISP 400
// 00/00/2021



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
enum ProgramState { ProgramEnd, ProgramRunning };



//========================================================
int main() {
    
    ProgramGreeting();
    UnitTest();

    return EndProgram(ProgramBody());
}
//========================================================



void ProgramGreeting() {
//launch program and explain what's going on

    cout << "Welcome to the program." << endl;
}


void UnitTest() {
//not sure what to do with this
}


int ProgramBody() {
//main program loop containing core logic

    int programState = ProgramState::ProgramRunning;
    char userInput;

    while(programState == ProgramState::ProgramRunning) {
    
        cout << "The program is running! Oink oink, bro. Press 0 to quit." << endl;

        cin >> userInput;

        if (userInput == '0' || userInput == '0') {
            programState = ProgramState::ProgramEnd;
        }
    }
    
    return programState;
}


int EndProgram(int programOutput) {
//this function is primarily for testing and logging errors, as well as feedback on exit

    cout << "Thanks for pigging with me, goodbye!" << endl;

    return programOutput;
}