#include <iostream>
using namespace std;
int main()
{
    // int a[] = {12, 34, 45, 9, 8, 90, 3};
    int arr[] = {0, 1, 2, 3, 4};
    int n = 5, left = 0, right = n - 1, temp, cntEv = 0;
    while (left < right)
    {
        while (arr[left] % 2 == 0 && left < right)
        {
            left++;
        }
        while (arr[right] % 2 == 1 && left < right)
        {
            right--;
        }
        if (left < right)
        {
            temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cntEv++;
        }
    }
    for (int i = 0; i < cntEv; i++)
    {
        for (int j = i + 1; j < cntEv; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < cntEv; i++)
    {
        cout << arr[i] << endl;
    }
    for (int i = cntEv; i < n; i++)
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
    for (int i = cntEv; i < n; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}

// int a[] = {12, 34, 45, 9, 8, 90, 3};
// int n = 7, temp;
// for (int i = 0; i < n; i++)
// {
//     for (int j = i + 1; j < n; j++)
//     {
//         if (a[i] > a[j])
//         {
//             temp = a[i];
//             a[i] = a[j];
//             a[j] = temp;
//         }
//     }
// }
// for (int i = 0; i < n; i++)
// {
//     if (a[i] % 2 == 0)
//     {
//         cout << a[i] << " ";
//     }
// }
// for (int i = 0; i < n; i++)
// {
//     if (a[i] % 2 == 1)
//     {
//         cout << a[i] << " ";
//     }
// }