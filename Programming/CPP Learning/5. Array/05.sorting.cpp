#include<iostream>
#include<algorithm> // sorting array
using namespace std;
int main(){
    int myArr[5] = {0,10, 32,20,21};
    sort(myArr, myArr+5); // range between fast and last element
    
    for(int i = 0; i < 5; i++){
        cout << myArr[i] << " ";
    }
    cout << endl;
    return 0;
}