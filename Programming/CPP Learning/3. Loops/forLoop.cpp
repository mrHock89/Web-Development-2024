#include<iostream>
using namespace std;
int main(){
    int teaCups;

    // Getting input
    cout << "Enter the number of cups you want to make : ";
    cin >> teaCups;

    // loop for making each cups
    cout << "Making teas: " << endl;
    for(int i = 1 ; i <= teaCups ; i++){
        cout << "Process for " << i << " no cup \n";
        cout << "1. Taking required water\n";
        cout << "2. Started boiling water\n";
        cout << "3. Added Suger\n";
        cout << "4. Added required ingridents\n";
        cout << "5. Done and stop the gass\n"; 
    }

    cout << "Finished\n";
    return 0;
}