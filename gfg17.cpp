#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 4, m = 3, min, max;
    // int arrOne[n] = {5, 7, 9, 3, 6, 2};
    // int arrTwo[n] = {1, 2, 6, -1, 0, 9};
    int arrOne[4] = {0, 0, 0, 0};
    int arrTwo[3] = {1, 2, -1};
    sort(arrOne, arrOne + n);
    sort(arrTwo, arrTwo + m);
    max = arrOne[n - 1];
    min = arrTwo[0];
    cout << max << endl
         << min << endl;
    cout << (max * min) << endl;
}