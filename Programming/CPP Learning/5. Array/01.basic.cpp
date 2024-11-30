#include<iostream>
using namespace std;
int main(){
    cout << "array Initialization and decleration" << endl;
    int myNumber[5] = {23, 7, 22, 56}; // declearation and initialization 
    cout << "Array Elements are: " << "\n";

    for(int i = 0; i < 5; i++){
        cout << myNumber[i] << endl;
    }
    return 0;
}