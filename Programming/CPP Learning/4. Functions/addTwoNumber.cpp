#include<iostream>
using namespace std;


// Function
int addTwoNumber(int a, int b){
    int sum = 0;
    sum = a + b;
    return sum;
}

// Main function
int main(){
    int a, b;
    cout << "Enter the value of a and b : ";
    cin >> a >> b;
    // cin >> b;

    // Function call 
    cout << "The sum of a and b is  " << addTwoNumber(a, b) << endl;
    return 0;
}