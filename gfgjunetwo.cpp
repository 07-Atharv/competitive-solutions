//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
        bool check(int i)
        {
            //If the current number is 1 
            if(i==1)
            {
                return true;
            }
            //If the ans is greater than 1 and less than 10 and is not equal to 7 then return false.
            if(i > 1 && i<10 && i != 7)
            {
                return false;
            }
            //Declare the sum
            int sum=0;
            //check while the number is present or not
            while(i)
            {
            //Take the number and make the square of that number and add the number
            int rem=i%10;
            i/=10;
            sum+=rem*rem;
            }
            return check(sum);
        }
    int nextHappy(int N){
        // code here
        for(int i=N+1;;i++){
            //if avaliable then return
            if(check(i)){
                return i;
            }
        }
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.nextHappy(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends