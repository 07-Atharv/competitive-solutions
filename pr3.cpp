#include <iostream>
using namespace std;
int main()
{
        int arr[10] = {1, 2, 3, 4, 5};
        int arrTwo[10];
        int n = 5, k = 3;
        for (int i = 0; i < n; i += k)
        {
                int endingPoint = min(i + k - 1, n - 1);
                int startingPoint = i;
                while (startingPoint < endingPoint)
                {
                        swap(arr[startingPoint++], arr[endingPoint--]);
                }
        }
        // return 0;
}

// ****************************************************
// for (int i = k - 1; i >= 0; i--)
// {
//         arrTwo[i] = arr[i];
// }
// for (int x = 2; x >= 0; x--)
// {
//         cout << arrTwo[x] << " ";
// }
// for (int a = n - 1; a >= 3; a--)
// {
//         cout << arr[a] << " ";
// }
// for (int i = n - k; i >= 0; i--)
// {
//         cout << arr[i] << " ";
// }
// for (int i = n - 1; i >= 3; i--)
// {
//         cout << arr[i] << " ";
// }
// array = {1,2,3,4,5}
// n = 5 , k = 3
// o/p = {3,2,1,5,4}