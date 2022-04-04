#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    string checkAdamOrNot(int N) {
        int son=N*N,sum=0,rem,srn;
        while(N>0)
        {
            int rem=N%10;
            N=N/10;
            sum=sum*10+rem;
        }
        srn=sum*sum;
        sum=0;
        while(srn>0)
        {
            int rem=srn%10;
            srn=srn/10;
            sum=sum*10+rem;
        }
        if(sum==son)
        return "YES";
        else
        return "NO";
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.checkAdamOrNot(N) << endl;
    }
    return 0;
}  // } Driver Code Ends