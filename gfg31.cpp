#include <iostream>
using namespace std;
int main()
{
    int n = 7;
    int arr[] = {4, 3, 7, 8, 6, 2, 1};
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[i + 1] && arr[i + 1] > arr[i + 2])
        {
            i = i + 2;
        }
        else
        {
            swap(arr[i], arr[i + 1]);
            swap(arr[i + 1], arr[i + 2]);
        }
    }
    return 0;
}
// i = 0 arr[0] < arr[1] && arr[1] > arr[2] 4 < 3 && 3 > 7 34 74 374
//                              
// 3748261

// i = 3 arr[3] < arr[4] && arr[4] > arr[5] swap(arr[3], arr[4])
// swap(arr[4], arr[5])
// 68 28
// 3746281


// 4 3 7
// 7 8 6
// 6 2 1


// 3 7 4

