// #include <iostream>
// #include <vector>
// using namespace std;
// int main()
// {
//     // vector<int> v = {1, 2, 3, 5, 5, 5, 5, 123, 125};
//     // binarry search apporach Olog(n)
//     //  i have solved in the linear search format O(n)
//     vector<int> v = {1, 2, 3, 5, 5, 5, 7, 123, 125};
//     int size = 9, left = 0, right = v.size(), temp, tempOne, x = 7;
//     for (auto i = v.begin(); i != v.end(); i++)
//     {
//         if (*i == x)
//         {
//             left = find(v.begin(), v.end());
//             right = find(v.begin(), v.end());
//             break;
//         }
//         if (*i != x)
//         {
//             left++;
//         }
//         else
//         {
//             temp = left;
//         }
//         if (*i != x)
//         {
//             right--;
//         }
//         else
//         {
//             tempOne = right;
//         }
//     }
//     cout << left << endl
//          << right << endl;
// }
// solving the problem by using the binary search approach
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a[] = {1, 2, 3, 5, 5, 5, 5, 123, 125};
    int n = 9, mid, low = 0, high = n - 1, x = 5;
    vector<int> res; // to hold  the value

    // IN THESE THE LEFT SIDE VALUES WILL BE STORED
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            res.push_back(mid);
            high = mid - 1;
        }
        else if (a[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
        // IN THESE LOOP THE VALUES IN THE RIGHT SIDE WILL BE STORED
        low = 0;
        high = n - 1;
    }
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == x)
        {
            res.push_back(mid);
            low = mid + 1;
        }
        else if (a[mid] < x)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (res.size() == 0) // means there is no value in the result vector means not found the
    {
        return {-1}; // to return the vector we used the curly braces
    }
    else
    {
        sort(res.begin(), res.end());
        return {res[0], res[res.size() - 1]};
    }
}