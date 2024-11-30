#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {9, 3, 2, 1, 6};
    reverse(arr, arr+5);
    for(int i : arr){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}