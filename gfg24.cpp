#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    vector<int> vE;
    vector<int> vO;
    int size = 7;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            vE.push_back(arr[i]);
        }
        else
        {
            vO.push_back(arr[i]);
        }
    }
    sort(vE.begin(), vE.end());
    sort(vO.begin(), vO.end());
    for (int i = 0; i < vE.size(); i++)
    {
        cout << vE[i] << " ";
    }
    for (int i = 0; i < vO.size(); i++)
    {
        cout << vO[i] << " ";
    }
}