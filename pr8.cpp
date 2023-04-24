#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[5] = {2, 8, 7, 1, 5};
    int n = 5, temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < n-2; i++)
    {
        cout << arr[i];
    }
    return 0;
}