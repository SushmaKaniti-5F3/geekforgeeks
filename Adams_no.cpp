#include <bits/stdc++.h>


using namespace std;




 // } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        int sum1=0,count=0;
        
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                sum1=arr[i]+arr[j];
                if(sum1==sum)
                {
                count++;
                }
            }
        }
        if(count>0)
        return count;
        else
        return -1;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}
  // } Driver Code Ends