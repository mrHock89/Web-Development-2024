// Retruning arra from function

#include<iostream>
#include<vector>
using namespace std;

// function to return array

vector<int> rn_array(int size){
    vector<int> arr(size);
    for(int i = 0; i < size; i++){
        arr[i] = (i + 1) * 10;
    }
    return arr;
}



int main(){
    int size = 5;
    vector<int> arr = rn_array(size);

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}