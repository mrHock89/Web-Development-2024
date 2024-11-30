#include<iostream>
using namespace std;
int main(){
    string teaName; // For favorite tea;

    cout << "Enter your favorite tea: ";
    getline(cin, teaName);
    if((teaName == "Oolong" || teaName == "oolong")){
        cout << "You have excellent taste.\n";
    }

    return 0;
}