#include <iostream>
using namespace std;
int main()
{
    int sortArray[100] = {21, 45, 3, 21, 56},temp;
    for (int i = 0; i < 5; i++) // 0
    {
        for (int j = i + 1; j < 5; j++)  // 1
        {
            if (sortArray[i] > sortArray[j]) // 21>45
            {
                temp = sortArray[i];
                sortArray[i] = sortArray[j];
                sortArray[j] = temp;
            }
        }
    }
    cout << "Sorted array elements are:" << endl;
    for (int i = 0; i < 5; i++)
    {
    cout << sortArray[i] << endl;
    }
    return 0;
}