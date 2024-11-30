// Learning nested loops

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
    for(int i = 0; i < teaTypes_size; i++){
        cout << "Brewing " << teaTypes[i] << "... " << endl;
        for(int j = 1; j <= 3; j++){
            cout << "Brewing " << j << " cup of " << teaTypes[i] << endl;
        }
    }

    cout << "Finisied alll tea brewing\n";

    return 0;
}