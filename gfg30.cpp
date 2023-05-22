#include <iostream>
#include <vector>
using namespace std;
#include <string.h>
int main()
{
    vector<float> vec;
    int i = 0;
    float sum = 0;
    int count = 1;
    int arr[] = {10, 20, 30, 40, 50};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        sum = arr[i] + sum;
        vec.push_back((sum) / count);
        count++;
    }
    for (int i = 0; i < vec.size(); ++i)
    {
        cout << vec[i] << endl;
    }
    return 0;
}
