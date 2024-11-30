#include<iostream>
using namespace std;
int main(){
    string response;
    do{
        cout << "Do you want more tea ? ";
        getline(cin, response);
    } while(response != "no" && response != "No" && response != "NO");
    return 0;
}