#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age : ";
    cin >> age;
    if(age > 18){
        cout << "You can purchase tea.\n";
    }else {
        cout << "You are too young to purchase tea.\n";
    }
    return 0;
}