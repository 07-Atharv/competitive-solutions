#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {-1, 2, -3, 4, -5, 6};
    int size = 6, cntP = 3, cntN = 3;
    vector<int> v;
    vector<int> k;
    vector<int> ans;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= 0)
        {
            v.push_back(arr[i]);
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            k.push_back(arr[i]);
        }
    }
    for (int i = 0; i < size / 2; i++) 
    {
        ans.push_back(v[i]);
        ans.push_back(k[i]);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << endl;
    }
}