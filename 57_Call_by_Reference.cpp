#include <iostream>
using namespace std;

// Global variable


// Approach 1: Passing by reference
void changeGlobalVarByReference(int &variable) {
    variable = 20;
}

// Approach 2: Using the global variable directly
void changeGlobalVarDirectly(int globalVar) {
    globalVar = 30;
}

int main() {
    int globalVar = 10;
    cout << "Global variable before changes: " << globalVar << endl;

    // Approach 1
    changeGlobalVarByReference(globalVar);
    cout << "Global variable after change by reference: " << globalVar << endl;

    // Approach 2
    changeGlobalVarDirectly(globalVar);
    cout << "Global variable after direct change: " << globalVar << endl;

    return 0;
}
