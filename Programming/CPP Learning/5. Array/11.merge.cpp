#include<iostream>
using namespace std;
int main(){
    int arr[3] = {2, 3, 4};
    int arr2[4] = {1, 5, 6, 7};
    int M_ARR[7];

    // Copying arr to M_RR
    copy(arr, arr + 3, M_ARR);
    for(int i = 0; i < 3; i++){
        cout << M_ARR[i] << " ";
    }
    cout << endl;
    
    // Copying arr to M_RR
    copy(arr2, arr2 + 4, M_ARR + 3);
    for(int i = 0; i < 7; i++){
        cout << M_ARR[i] << " ";
    }
    cout << endl;

    cout << "arr and arr2 copid to M_RR.\n";
    return 0;

}