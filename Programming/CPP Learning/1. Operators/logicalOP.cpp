// Logical operator are used to test if a comparison is true or false

#include<iostream>
using namespace std;
int main(){
    bool isStudent;
    int numOfCups;

    // Taking input
    cout << "Is the user is a student: ";
    cin >> isStudent;

    cout << "Enter the number of cups a user is purchased: ";
    cin >> numOfCups;

    // Checking conditions
    if(isStudent == true || numOfCups > 15){
        cout << "The user is eligible for a tea subscription \n";
    }else{
        cout << "Not eligible \n";
    }
    return 0;
}