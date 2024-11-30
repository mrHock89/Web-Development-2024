// Linear search is a process of finding an element of the array. 
#include<iostream>
// using namespace std;
using namespace std;
int main(){
    int myArr[6] = {54, 32, 13, 23, 90, 01}; // Array declearation and initialization
    int target, index;
    cout << "Enter the target: ";
    cin >> target;
    

    // loop for finding target
    for(int i = 0; i < 6; i++){
        if(myArr[i] == target){
            index = i;
            break;
        } else {
            index = -1;
        }
    }
    if(index != -1)
        cout << "Target is found at index: " << index << endl;
    else
        cout << "Target is not found." << endl;
    return 0;
}