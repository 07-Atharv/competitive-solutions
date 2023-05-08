#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    // int arr[] = {7, 1, 2, 3, 4, 5, 6};
    // int size = 7, max, min;
    // sort(arr, arr + size);
    // for (int i = 0; i < size; i++)
    // {
    //     cout << arr[i] << endl;
    // }
    // max = arr[size - 1];
    // min = arr[0];
    // vector<int> v;
    // v.push_back(max);
    // v.push_back(min);
    // cout << "THESE" << endl;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout << v[i] << endl;
    // }
    // return 0;
    // int arr[] = {1, 6, 9, 4, 3, 7, 8, 2};
    int arr[] = {7, 1, 2, 3, 4, 5, 6};
    int size = 7;
    int x = *max_element(arr, arr + size);
    int y = *min_element(arr, arr + size);
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == x)
        {
            swap(arr[0], arr[i]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == y)
        {
            swap(arr[1], arr[i]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}