// Relational operator are used to compare towo variable or values

#include<iostream>
using namespace std;
int main(){
    int numOfCup;
    
    cout << "Enter the number of cups: ";
    cin >> numOfCup;

    // Condition checking
    if(numOfCup > 20){
        cout << "Customer will get Golde badge \n"; 
    }else if (numOfCup >= 10 && numOfCup <= 20)
    {
        cout << "Customer will get silver badge \n";
    }else{
        cout << "No gift. Try next time \n";
    }

    return 0;
    
}