#include<iostream>
using namespace std;
int main(){
    int noOfCupsBuy;
    int yearOfMemebers;
    cout << "Enter the number of cups the user bought: ";
    cin >> noOfCupsBuy;
    cout << "Enter the membership time of the user in year: ";
    cin >> yearOfMemebers;
    if(noOfCupsBuy > 12 || yearOfMemebers > 1){
        cout << "The user is eligiable for the discount.\n";
    }else {
        cout << "The user is not eligiable for the discount. \n";
    }
    return 0;
}