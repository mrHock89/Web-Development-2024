// assignment operator are used to assagin values to variables
#include<iostream>
using namespace std;
int main(){
    int teaBags;
    
    // Taking input for number of bags
    cout << "Enter the number of bags they have: ";
    cin >> teaBags;

    // Assign additional bags based on certain condition
    if(teaBags < 10){
        teaBags += 5;
    }

    // Final tea bags
    cout << "Total tea bags have : " << teaBags << endl;
    return 0;
}