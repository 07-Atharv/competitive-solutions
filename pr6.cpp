#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {0, 2, 1, 2, 0};
    int cntZ = 0, cntO = 0, cntT = 0;
    int n = 5;
    int l = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            cntZ++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            cntO++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 2)
        {
            cntT++;
        }
    }
    // for (int i = 0; i < cntZ; i++)
    // {
    //     arr[i] = 0;
    // }
    // for (int i = cntZ; i < cntO; i++)
    // {
    //     arr[i] = 1;
    // }
    // for (int i = cntO; i < n; i++)
    // {
    //     arr[i] = 2;
    // }
    while (cntZ > 0)
    {
        arr[l++] = 0;
        cntZ--;
    }
    while (cntO > 0)
    {
        arr[l++] = 1;
        cntO--;
    }
    while (cntT > 0)
    {
        arr[l++] = 2;
        cntT--;
    }
    // cout << cntO << endl;
    // cout << cntT << endl;
    // cout << cntZ << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
    return 0;
}