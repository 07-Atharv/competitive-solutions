    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long maxsum=0,maxvalue=LONG_MIN;
        //iterate from start to beginning
        for(int i=0;i<n;i++)
        {
            //store the sum of the elemnts
            maxsum=maxsum+arr[i];
            //take the max sum
            maxvalue=max(maxsum,maxvalue);
            //if sum is contributing to the min value then dont add to the sum
            if(maxsum<0)
            {
                maxsum=0;
            }
        }
        //return the max value
        return maxvalue;
    }