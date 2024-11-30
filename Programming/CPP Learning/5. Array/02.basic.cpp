#include<iostream>
using namespace std;
int main(){
    int myArray[] = {10, 20 ,30 , 50 , 60}; // Compiler determines size

    // Iteration over an array using for loop
    // for(int i = 0; i < 5; i++){
    //     cout << myArray[i] << " "
    //     ;
    // }

    // using range-based for loop
    for(int i : myArray){
        cout << i << " ";
    }
    cout << endl; // for new line
    return 0;
}