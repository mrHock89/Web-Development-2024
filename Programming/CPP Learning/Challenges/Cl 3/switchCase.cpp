#include<iostream>
using namespace std;
int main(){
    int teaBrewingMtd;

    // List of tea brewing method
    cout << "1. Boiling\n";
    cout << "2. Steeping\n";
    cout << "3. Iced Tea\n";

    // Selecting Method
    cout << "Select your method (1 to 3): ";
    cin >> teaBrewingMtd;
    switch(teaBrewingMtd){
        case 1:
            cout << "You have selected " << teaBrewingMtd << ". Boiling method.\n";
            cout << "Instructions are ...\n";
        break;
        case 2:
            cout << "You have selected " << teaBrewingMtd << ". Steeping method.\n";
            cout << "Instructions are ...\n";
        break;
        case 3:
            cout << "You have selected " << teaBrewingMtd << ". Iced Tea method.\n";
            cout << "Instructions are ...\n";
        break;
        default:
            cout << "You have selected wrong number.\n";
            break;
    }
    return 0;
}