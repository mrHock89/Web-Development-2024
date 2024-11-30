#include<iostream> 
using namespace std;
int main(){
    int teaType, price;

    cout << "Tea types" << endl;
    cout << "1. Freen Tea" << endl;
    cout << "2. Black Tea" << endl;
    cout << "3. Oolong Tea" << endl;
    
    // Taking input form the user
    cin >> teaType;

    // Displaying price after selecting
    switch(teaType){
        case 1 :
            cout << "You have selected Green Tea. Price is : $2 \n";
            break;
        case 2 :
            cout << "You have selected Black Tea. Price is : $3 \n";
            break;
        case 3 :
            cout << "You have selected Oolong Tea. Price is : $4 \n";
            break;
        default : 
            cout << "Select a Valid number.\n";
            break;
    }

    return 0;
}