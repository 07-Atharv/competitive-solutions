#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 3, 2, 1};
    int n = 5, j, i;
    for (i = 0, j = n - 1; i < n / 2; i++, j--)
    {
        if (arr[i] != arr[j])
        {
            return 0;
        }
    }
    return 1;
}