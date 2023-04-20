#include <iostream>
using namespace std;
int main()
{
    int arr[10] = {1, 0, 1, 1, 0, 0, 0, 0, 1, 0};
    int cnt = 0, x = 0;
    for (int i = 0; i < 10; i++)
    {
        if (x == arr[i])
        {
            cnt = cnt + 1;
        }
    }
    cout << "Count of zeroes in the array is " << cnt << endl;
    return 0;
}