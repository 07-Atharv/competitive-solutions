#include <iostream>
using namespace std;
int main()
{
    int A[] = {1, 0, 1, 1, 1, 1, 1, 0, 0, 0};
    int n = 10, cntZ = 0, cntO = 0;
    for (int i = 0; i < n; i++)
    {
        switch (A[i])
        {
        case 0:
            cntZ++;
            break;
        case 1:
            cntO++;
            break;
        }
    }
    for (int i = 0; i < cntZ; i++)
    {
        A[i] = 0;
    }
    for (int i = cntZ; i < n; i++)
    {
        A[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
}