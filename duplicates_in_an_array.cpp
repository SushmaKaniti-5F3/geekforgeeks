class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        int m=*max_element(arr,arr+n);
        vector<int>a;
        vector<int>d(m+1,0);
        for(int i=0;i<n;i++)
        {
            d[arr[i]]+=1;
        }
        for(int i=0;i<m+1;i++)
        {
            if(d[i]>1)
                a.emplace_back(i);
        }
        if(a.size()==0)
        {
            a.emplace_back(-1);
            return a;
        }
        else
        return a;
        
    }
};

int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
