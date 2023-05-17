/*
Algorithm

Step 1 - Start
Step 2 - Given an unsorted array assign the 'e' at index i=0 and 'o' to i+1
Step 3 - Compare the element at index first and index second
Step 4 - If element at the index 'e' is smaller than the index 'o' inc the val by 2
Step 5 - Else swap the 'e' and 'o'
Step 6 - End
 */

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = 5;
    for (int i = 0; i < n; i += 2)
    {
        int e = i;
        int o = i + 1;
        if (arr[e] < arr[o])
        {
            e += 2;
            o += 2;
        }
        else
        {
            swap(arr[e], arr[o]);
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}