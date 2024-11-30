#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int arr_cp[5];

    // coping arr to arr_cp
    for (int i = 0; i < 5; i++)
    {
        arr_cp[i] = arr[i];
    }

    //
    cout << "Elements of arr: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Elements of arr_cp: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr_cp[i] << " ";
    }
    cout << endl;
    return 0;
}
