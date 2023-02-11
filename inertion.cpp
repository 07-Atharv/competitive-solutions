#include <iostream>
using namespace std;
void display(int arry[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arry[i] << endl;
    }
}
int insertion(int array[], int index, int element, int capacity, int size)
{
    if (size >= capacity)
    {
        // cout << "Arrray is full!!" << endl;
        return -1;
    }
    for (int i = size - 1; i >= index; i--)
    {
        array[i + 1] = array[i];
    }
    array[index] = element;
}
int main()
{
    // int n, i, arr[100], value, position;
    // cout << "Insertion in the arrays" << endl;
    // cout << "Enter the number of elements in the array" << endl;
    // cin >> n;
    // for (i = 0; i < n; i++)
    // {
    //     cout << "Enter array element" << endl;
    //     cin >> arr[i];
    // }
    // cout << "Enter the element you want to insert:" << endl;
    // cin >> value;
    // cout << "Enter the position you want to insert at:" << endl;
    // cin >> position;
    // n++;
    // for (int x = n - 1; position >= x; x--)
    // {
    //     arr[x + 1] = arr[x];
    // }
    // arr[position - 1] = value;
    // cout << "Array elements are" << endl;
    // for (i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " " << endl;
    // }

    // insertion using function
    int arrouy[100] = {12, 23, 34, 45};
    int size = 4;
    insertion(arrouy, 3, 90, 100, 4);
    size += 1;
    display(arrouy, size);
    return 0;
}
// Operations on array

// traversal - done
// insertion - by def at start and end
// deletion - by def at start and end
// sorting - done(asc,dec1)
// searching - done
// rotation - pending
// merging -    
// largest and smallest element in the array