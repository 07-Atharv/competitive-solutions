// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main()
// {
//     // int arr[] = {3, 8, 5};
//     int arr[] = {3, 2, 4, 6, 5};
//     int n = 5;
//     sort(arr, arr + n);
//     int ansOne, ansTwo;
//     while (n > 0)
//     {
//         ansOne = arr[n - 1] * arr[n - 1];
//         ansTwo = arr[n - 2] * arr[n - 2] + arr[n - 3] * arr[n - 3];
//         if (ansOne == ansTwo)
//         {
//             cout << "Yes" << endl;
//             break;
//         }
//         else if (ansOne != ansTwo)
//         {
//             n--;
//         }
//         if (n == 0)
//         {
//             cout << "No" << endl;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//     // int arr[] = {3, 1, 4, 6, 5};
//     int arr[] = {10, 4, 6, 12, 5};
//     int n = 5;
//     for (int i = 0; i < n; i++)
//     // 0 - 4 |1-4| 2-4 |3-4 |4-4|
//     {
//         for (int j = i + 1; j < n; j++)
//         // 1-4 2-4 3-4 4-4|1-4 2-4 3-4 4-4|1-4 2-4 3-4 4-4|1-4 2-4 3-4 4-4|
//         {
//             for (int k = j + 1; k < n; k++)
//             //  2-4 3-4 4-4| 2-4 3-4 4-4 |2-4 3-4 4-4| 2-4 3-4 4-4|
//             //  2-4 3-4 4-4| 2-4 3-4 4-4 |2-4 3-4 4-4| 2-4 3-4 4-4|
//             //   2-4 3-4 4-4| 2-4 3-4 4-4 |2-4 3-4 4-4| 2-4 3-4 4-4|
//             {
//                 int x = arr[i] * arr[i];
//                 int y = arr[j] * arr[j];
//                 int z = arr[k] * arr[k];
//                 if (x == y + z || y == x + z || z == x + y)
//                 {
//                     cout << "Yes" << endl;
//                     break;
//                 }
//             }
//         }
//     }
// }

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {3, 1, 4, 6, 5};
    int n = 5;
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr[i] * arr[i];
    }
    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        int k = i - 1;
        while (j < k)
        {
            if (arr[j] + arr[k] == arr[i])
            {
                cout << "Yes" endl;
            }
            if (arr[j] + arr[k] < arr[i])
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return 0;
}

// {
//     1, 3, 4, 5, 6
// }
// {
//     j1,9,16,25k,36i
//     1,j9,16,25k,36i
//     1,9,j16,25k,36i
//     1,9,j16k,25,36i

//    j1,9,16k,25i,36
//    1,j9,16k,25i,36
       
// }