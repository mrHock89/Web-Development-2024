// Arithmetic operators are used to perform mathematical operation like addition, subtraction, divition, multiplication etc
// Example to learning Arithmetic OPeration

#include<iostream>
using namespace std;
int main(){
    int noOfCups, cupPrice;
    double totalPrice, tottalPriceAfterDiscount, finalPrice;

    // Taking input for  Number of cups and Price
    // Number of cups
    cout << "Enter the number of cups: ";
    cin >> noOfCups ;

    // Cup prices
    cout << "Enter the price per cup: ";
    cin >> cupPrice;

    // Total Price
    totalPrice = noOfCups * cupPrice;
    cout << "Total Price is : " << totalPrice  << endl;

    // Applying Discount if price is reaching above 500
    if(totalPrice > 500){
        finalPrice = totalPrice - (totalPrice * 5 / 100);
    }
    else {
        finalPrice = totalPrice;
    }

    cout << "Final Price is : " << finalPrice << endl;
    return 0;
}