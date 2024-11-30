#include<iostream>
using namespace std;

// Function decleration and definiation
int totalSum(int myArr[], int size){
    int total = 0; // for avoiding garbage value
    for(int i = 0; i < size; i++){
        total += myArr[i];
    }
    return total;
}

// main function
int main(){
    int myArr[] = {23, 45, 21, 48, 99}; // compiler determine  size 
    cout << "Total sum : " << totalSum(myArr, 5) << endl;
    return 0;
}