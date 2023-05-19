#include <iostream>
using namespace std;
int main()
{
    int arr[] = {111, 222, 333, 444, 555};
    int n, store, sum = 0, size = 5, cnt = 0;
    // cout << "Enter the number to check if it is palindrome or not\n " << endl;
    // cin >> n;
    // store = n; // to store the orignal number for the comparision purpose
    for (int x = 0; x < 5; x++)
    {
        n = arr[x];
        while (n > 0)
        {
            int rem = n % 10;
            sum = rem + (sum * 10);
            n = n / 10;
        }
        if (sum != arr[x])
        {
            return 0;
        }
        return 1;
    }

    // -- solved -- //
    // for(int x=0;x<n;x++)
    // {
    //     int temp=a[x];
    //     int sum=0;
    //     while(temp>0)
    //     {
    //         int rem=temp%10;
    //         sum=rem+(sum*10);
    //         temp=temp/10;
    //     }
    //     if(sum!=a[x])
    //     {
    //         return 0;
    //     }
    // }
    // return 1;