// Dynamic allocation allows us to allocate memory during runtime. 
// It is usefull when the size of an array is not known at compile time and needs to be specified during runtime.

// Dynaminc array decleration
// 1. declear a pointer that will store the base address of the allocated array.
// 2. use "new" operator to reserve memory space to accommodate an array of a particular data type.
// 3. When allocating specify the size of the array.

#include<iostream>
using namespace std;
int main(){
    // Taking array size as input
    cout << "Enter the size of the array: ";
    int size;
    cin >> size;

    // Dynamically allocated array
    int *arr /*pointer*/= new /*operator*/ int[size] /*size of the array*/;

    // Assign vlues to the array as input
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // Printing elements of the array
    for(int j = 0; j < size; j++){
        cout << "Element " << j + 1 << ". " << arr[j] << endl;;
    }

    // deallocating the memory
    delete[] arr;
    return 0;
}