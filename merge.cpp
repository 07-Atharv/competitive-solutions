#include <iostream>
using namespace std;
int main()
{
    int arr[100] = {12, 23, 34, 45, 56};
    int arrsec[4] = {231, 435, 324, 12};
    int i, j;
    for (int i = 0; i < 4; i++)
    {
        arr[5 + i] = arrsec[i];
    }
    for (j = 0; j < 9; j++)
    {
        cout << arr[j] << endl;
    }
}