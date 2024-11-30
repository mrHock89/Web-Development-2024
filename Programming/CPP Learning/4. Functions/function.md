# Function: 
- Function is a set of statements or block of code that is used for do some spedicif task.
- The idea is to put some commonly or repeatedly done task together to make a function so that insted of writing the same code again and again for different inputs, we call this function. 

## Syntax:
- returnTypes functionName (parameterTypes parameterName, ...);

### Notes: 
- Functions are the block of code which only runs when it is called that is used for do some specific task.
- We can pass data, known as parameters into a function.
- Function are important for reusing code.

## Example: 
ADD Two number (cpp code): 
```
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
    cin >> a;
    cin >> b;

    // Function call 
    cout << "The sum of a and b is  " << addTwoNumber << endl;
    return 0;
}
```