#include<iostream>
using namespace std;
int main(){
    int teaCups, cupsRemained;
    cout << "Enter the number of cups you want to ordered: ";
    cin >> teaCups;
    cout << "You have " << teaCups << " cups.\n";
    // cupsRemained = teaCups;
    while(teaCups > 0){
        cout << "Serving a cups of tea. \n";
        teaCups--;
        cout << "Cups remained: " << teaCups << endl;
    }
    cout << "All tea cups are searved.\n";
    return 0;
}