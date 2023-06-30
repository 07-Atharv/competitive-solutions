//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    
	int isDivisible(string s){
	    //Aim is to calculate the remainder of each 1 bit in the string and add all those rem and divide by 3 
	    //complete the function here
	    int store_ans = 0;
	    int size = s.length();
	    for(int i=0;i<size;i++)
	    {
	        //to check if the position is odd or not
	       if(i%2!=0)
	       {
	           //if the position is odd and the number at position is 1 then add the 1
	            if(s.at(i)=='1')
	            {
	                store_ans = store_ans + 1;
	            }
	        }
	        else
	        {
	            //if the position is even and number is 1 then add 2
	            if(s.at(i)=='1')
	            {
	                store_ans = store_ans + 2;
	            }
	        }
	    }
	    //if the addition is divisible by 3 then ret 3 else 0
	    if((store_ans%3)==0)
	    {
	        return 1;
	    }
	    else
	    {
	        return 0;
	    }
	}
	

};

//{ Driver Code Starts.
int main(){
    
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        Solution ob;
        cout << ob.isDivisible(s) << endl;
    }
return 0;
}


// } Driver Code Ends