#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // vector<int> vec;
    // vec = {1, 2, 3, 2, 3, 1, 3};
    // int cntOne = 0, cntTwo = 0, cntThree = 0;
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     if (vec[i] == 1)
    //     {
    //         cntOne++;
    //     }
    // }
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     if (vec[i] == 2)
    //     {
    //         cntTwo++;
    //     }
    // }
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     if (vec[i] == 3)
    //     {
    //         cntThree++;
    //     }
    // }
    // cout << cntOne << endl;
    // cout << cntTwo << endl;
    // cout << cntThree << endl;
    // if (cntThree % 2 != 0 || cntTwo % 2 != 0 || cntOne % 2 != 0)
    // {
    //     cout << "3cnt" << endl;
    // }

    int arr[] = {12, 32, 56, 56, 56, 87};
    int size = 6, cnt = 1;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                cout << arr[j] << endl;
                cnt++;
                // cout << j << endl;
            }
        }
    }
    cout << cnt << endl;

// Given an array of n postive integers where all nos occur even number of times excepts one number which occurs odd nos of  times

// arr[] = 1,2,3,2,3,1,3
// o/p = 3 occurs three times