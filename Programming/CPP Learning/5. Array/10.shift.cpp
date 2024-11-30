#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 1, 3, 9, 5};
    // left shift
    for (int i = 1; i < 5; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[4] = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // right shift
    int arr2[5] = {2, 1, 3, 9, 5};
    for (int i = 4; i > 0; i--)
    {
        arr2[i] = arr2[i - 1];
    }

    arr2[0] = 0;
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }
    cout << endl; // Fill the first position with 0
    return 0;
}