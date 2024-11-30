#include<iostream>
#include<cmath>
using namespace std; 
int main(){
    float teaBasePrice;
    cout << "Enter the tea base Price: ";
    cin >> teaBasePrice;

    // modifying price
    float modifyPrice = teaBasePrice * 1.10;
    cout << "Modified price is : " << modifyPrice << endl;
    // Final rounded price
    int newPrice = static_cast<int>(round(modifyPrice));

    // Output
    cout << "New tea price is : " << newPrice << endl;
    return 0;

}