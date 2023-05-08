#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    // int arr[] = {1, 4, 3, 7, 6, 0};
    int arr[] = {1, 100, 42, 4, 23};
    int n = 5, minLS, maxL;
    sort(arr, arr + n);
    maxL = arr[n - 1];
    minLS = arr[n - 2];
    cout << (maxL * minLS) << endl;
}