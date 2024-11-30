// Question
/*
Write a program that uses bitwise AND (&) to check which tea types 
are in stock. The stock is encoded in an integer (1 for Green, 2 for 
Black, 4 for Oolong). Allow the user to check availability by inputting
the tea type (1, 2, or 4), and display a message saying whether that tea
is in stock or not.*/

// Solution
#include <iostream>

using namespace std;

int main() {
    int stock = 7; // Availability 

    cout << "1. Green Tea" << endl;
    cout << "2. Black Tea" << endl;
    cout << "4. Oolong Tea" << endl;

    int teaType;
    cout << "Tea availability checking: " << endl;
    cout << "Enter the tea number that the user wants to check: ";
    cin >> teaType;
    if( teaType == 1 || teaType == 2 || teaType == 4)
    {
        if (teaType & stock) {
            cout << "Tea type is available.\n";
        } else {
            cout << "Tea type is not available.\n";
        }
    } else {
        cout << "You have entered wrong number.\n";
    }

    return 0;
}