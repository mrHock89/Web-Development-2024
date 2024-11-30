#include<iostream>
using namespace std;
int main(){
    string favoriteTea;
    int cupsOfTea;

    // Taking input using getline for favorite tea
    cout << "Enter your favorite tea: ";
    getline(cin, favoriteTea);

    // Taking input using cin for cups of tea
    cout << "Enter the cups of tea: ";
    cin >> cupsOfTea;

    // output
    cout << "User have ordered " << cupsOfTea << " " <<favoriteTea <<  " of his choice\n";
    return 0;
}