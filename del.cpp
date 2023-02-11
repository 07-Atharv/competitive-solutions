#include <iostream>
using namespace std;
int deleteElement(int array[], int size, int capacity, int index)
{
    if (index >= capacity - 1)
    {
        cout << "You cannot delete the element" << endl;
    }
    for (int i = index; i < size - 1; i++)
    {
        array[i] = array[i + 1];
    }
}
void display(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        cout << array[i] << endl;
    }
}
int main()
{
    int arrays[100] = {12, 23, 45, 56, 67, 768, 78};
    int size = 7;
    int index = 2;
    int capacity = 100;
    deleteElement(arrays, size, capacity, index);
    size--;
    display(arrays, 7);
    return 0;
}