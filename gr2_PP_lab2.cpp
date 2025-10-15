// gr2_PP_lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


//laboratorium 2
#include <iostream>
using namespace std;
int main() {  // kod 02_01
    cout << "i<=10" << endl;
    for (int i = 0; i <= 10; i++) {
        cout << i << endl;
    }

    cout << endl;
    cout << "[5,7]" << endl;
    for (int i = 5; i <= 7; i++) {
        cout << i << endl;
    }

    cout << "\n[5,7):" << endl;
    for (int i = 5; i < 7; i++) {
        cout << i << endl;
    }

    cout << "\n[0,10]" << endl;
    for (int i = 0; i <= 10; i+=2) {
        cout << i << endl;
    }

    cout << "\n10 -> 0" << endl;
    for (int i = 10; i >= 0; i--) {
        cout << i << endl;
    }
    cout << "Koniec programu" << endl;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
