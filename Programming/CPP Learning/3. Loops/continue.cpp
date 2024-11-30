// Learning continue 

#include<iostream>
using namespace std;
int main(){
    string teaTypes[] = {"Black Tea", "Green Tea", "Milk Tea", "Orange Tea"};
    cout << "Tea Menu: \n";
    int teaTypes_size = sizeof(teaTypes) / sizeof(teaTypes[0]);
    for(int i = 0; i < (sizeof(teaTypes) / sizeof(teaTypes[0])); i++){
        cout << i + 1<< ". " << teaTypes[i] << endl;
    }

    // loop to check condition
    for(int i = 0; i < teaTypes_size + 1; i++){
        if(teaTypes[i] == "Green Tea"){
            cout << "Skipping the " << teaTypes[i] << endl;
            continue;
        }

        cout << "Brewing " << teaTypes[i] << "... " << endl;
    }

    return 0;
}