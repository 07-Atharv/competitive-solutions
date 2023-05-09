// shift all the neg left side and postive right side
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {-3, 3, -2, 2};
    int n = 4;
    int left = 0, right = n - 1;
    for (int i = 0; i < n; i++)
    {
        while (left <= right)
        {
            if (arr[left] < 0 && arr[right] > 0)
            {
                left++;
                right--;
                swap(left, right);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
