// you are given an array of A of N elements Find the min index between the two elements of the array , x and y
// N = 4
// A[] = {1,2,3,2};
// O/P=1
// x = 1 and y = 2 There are the two distances between x and y , which are 1 and 3 of which atleast one
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 5, 43, 23};
    int n = 5, i = 0;
    int x = 10, y = 20;
    while (i < n)
    {
        if (arr[i] != x && arr[i] != y)
        {
            i = i + 1;
        }
    }
    return false; 
}