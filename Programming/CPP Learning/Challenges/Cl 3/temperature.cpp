#include<iostream>
using namespace std;
int main(){
    int temperature;
    cout << "Enter the temperature: ";
    cin >> temperature;

     // checking loop
    if( temperature > 100){
        cout << "Too hot\n";
    } else if(temperature >= 80 && temperature <= 100){
        cout << "Perfect temperature\n";
    } else  {
        cout << "Too Cold\n";
    }
    return 0;
}