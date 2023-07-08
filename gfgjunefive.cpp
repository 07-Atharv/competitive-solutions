    bool findTriplets(int arr[], int n)
    { 
        //Your code here
        sort(arr,arr+n);
        for(int i=0;i<n;i++)
        {
        cout<<arr[i];
        }
        for(int i=0;i<n;i++)
        {
            int left=i+1;
            int right=n-1;
            
                    while(left<right)
                    {
                    if(arr[i]+arr[left]+arr[right]==0)
                    {
                        return true;
                    }
                    else if(arr[i]+arr[left]+arr[right]<0)
                    {
                        left++;
                    }
                    else
                    {
                        right--;
                    }
            }
        }
        return false;
    }