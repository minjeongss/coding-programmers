//Problem
// This problem is given two integers n and m as standard input.
//Use the star (*) character to print a rectangle with n width and m length.
//example
//input
//5 3
//Print
//*****
//*****
//*****

#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a >> b;
    for (int i = 0; i < b; i++) {
        for (int k = 0; k < a; k++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}