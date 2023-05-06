#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {3, 2, 1, 56, 1000, 167};
    int n = 6;
    int min, max;
    sort(arr, arr + n);
    max = arr[n - 1];
    min = arr[0];
    cout << min << endl
         << max;
}