#include<iostream>
using namespace std;
int main(){
    int teaPacks, pricePerPack;
    cout << "Enter the number of tea packs: ";
    cin >> teaPacks;
    cout << "Enter the price of oer pack: ";
    cin >> pricePerPack;

    float totalPrice = teaPacks * pricePerPack;
    float finalaPrice = totalPrice - (totalPrice * 0.10);

    cout << "Total price is: " << totalPrice << endl;
    cout << "Final price after discount is: " << finalaPrice << endl;
    return 0;
}