#include<iostream>
using namespace std;
int main(){
    string teaType;
     
    //  input
    cout << "Enter the tea type: ";
    // cin >> teaType;
    getline(cin, teaType);

    // Condition checking
    if(teaType == "Green Tea"){
        cout << "The ordered is confirmed \n";
    }

    return 0;
}