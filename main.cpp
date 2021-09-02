//===== libraries
#include <iostream>



//===== namespaces
using namespace std;



//===== prototypes
void StartProgram();
void ProgramLoop();
void EndProgram();



//===== variables
const int TEN = 10;



//========================================================
int main() {
    
    StartProgram();
    ProgramLoop();
    EndProgram();

    return 0;
}
//========================================================



//===== functions
void StartProgram() {
    cout << "Welcome to the pig game. Time to pig." << endl;
}

void ProgramLBody() {
    cout << "The game has begun!" << endl;
}

void EndProgram() {
    cout << "Thanks for pigging with me." << endl;
}