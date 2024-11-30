#include<iostream>
using namespace std;
int main(){
    string response;

    while(true){
        cout <<  "Do you want  more tea (type 'stop' to exit ? \n";
        getline(cin, response);

        if(response == "stop"){
            break;
        }
    }

    cout << "No more tea will be searved to you.\n";
    return 0;
}