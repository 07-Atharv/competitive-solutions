#include <iostream>
using namespace std;
int main()
{
    int arrOne[5] = {12, 13, 234, 21, 5};
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        if (arrOne[i] == i)
        {
            cout << i;
            break;
        }
    }
    return 0;
}