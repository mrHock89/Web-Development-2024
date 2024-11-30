#include <iostream>
using namespace std;
int main()
{
    int my2DArr[2][5] = {{2, 3, 1, 4, 10}, {20, 30, 10, 40, 100}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Element at row " << i << " column " << j <<  " is " << my2DArr[i][j] << endl;
        }
    }
    return 0;
}