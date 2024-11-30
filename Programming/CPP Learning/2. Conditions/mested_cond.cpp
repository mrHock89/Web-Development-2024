#include<iostream>
using namespace std;
int main(){
    int cups;

    double pricePerCup = 6, totalPrice, discount;

    cout << "Enter the number of cups: ";
    cin >> cups;

    totalPrice = cups * pricePerCup;

    // Calculating discount
    if(cups > 20){
        discount = totalPrice * 0.20;
    } else if(cups >= 10 && cups <= 20){
        discount = totalPrice * 0.10;
    } else {
        discount = 0;
    }

    totalPrice -= discount;
    cout << "Final price is : " << totalPrice << endl;
    return 0;
}