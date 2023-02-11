#include <iostream>
using namespace std;
int LinearSearch(int array[], int element, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == element)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100] = {12, 23, 34, 45, 56, 67, 78, 89};
    int size = 8, search = 89;
    int searchLinear = LinearSearch(arr, search, size);
    cout << searchLinear << endl;
}

// it will work for both sorted and unsorted also