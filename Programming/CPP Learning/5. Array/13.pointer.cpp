#include<iostream>
using namespace std;

// Function decleration and definiation
void totalSum(int myArr[], int size){
    int total = 0; // for avoiding garbage value
    for(int i = 0; i < size; i++){
        myArr[i] = myArr[i] + 4;
    }
}

// main function
int main(){
    int myArr[] = {23, 45, 21, 48, 99}; // compiler determine  size 
    totalSum(myArr, 5); //function call
    cout << "Modified array : \n";
    for(int i = 0; i < 5; i++){
        cout << myArr[i] << " ";
    }
    cout << endl;
    return 0;
}