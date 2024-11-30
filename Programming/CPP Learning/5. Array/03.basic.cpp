#include<iostream>
using namespace std;
int main(){
    cout << "Array size : \n";
    int myArr[] = {5, 2, 1, 5, 3, 6}; // Compiler determine size

    int myArr_size = sizeof(myArr) / sizeof(myArr[0]);
    cout << "Array size is: " << myArr_size << endl;
    return 0;
}