#include <iostream>
using namespace std;
int BinarySearch(int array[], int element, int size)
{
    int hi = size - 1, mid, lo = 0;
    while (lo <= hi)
    {
        mid = (lo + hi) / 2;
        if (array[mid] == element)
        {
            return mid;
        }
        // if the element is bigger then
        if (array[mid] < element)
        {
            lo = mid + 1;
            // shift the low
        }
        if (array[mid] > element)
        {
            // if the elemet is smaller then
            hi = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[100] = {12, 23, 45, 56, 67, 78};
    int size = 6;
    int element = 78;
    int s = BinarySearch(arr, element, size);
    cout << "Element " << element << " found at position " << s << endl;
}