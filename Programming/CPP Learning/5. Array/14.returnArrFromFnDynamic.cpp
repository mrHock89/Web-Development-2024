// Retruning arra from function


#include<iostream>
using namespace std;

// function to return array

int* rn_array(int size){
    // declearing dynamic array
    int* myArr = new int[size];
    for(int i = 0; i < size; i++){
        myArr[i] = (i + 1) * 10;
    }
    return myArr;
}

int main(){
    int size = 5;
    int* arr = rn_array(size);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    delete[] arr;
    return 0;
}