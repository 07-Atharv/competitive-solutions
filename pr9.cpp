#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arrOne[] = {2, 4, 1, 3, 5};
    int n = 5, temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arrOne[i] > arrOne[j])
            {
                temp = arrOne[i];
                arrOne[i] = arrOne[j];
                arrOne[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 3)
        {
            cout << arrOne[i];
        }
    }
    return 0;
}