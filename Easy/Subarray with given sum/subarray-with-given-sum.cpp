//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long sum)
    {
        // Your code here
        
        int left = 0, right = 0;
    int curr_sum = 0;
    if(sum==0)return {-1};
    
    while (right <= n) {
        while (curr_sum > sum && left < right) {
            curr_sum -= arr[left];
            left++;
        }
        
        if (curr_sum == sum) {
            vector<int> result;
            result.push_back(left + 1);  // Convert to 1-based indexing
            result.push_back(right);
            return result;
        }
        
        if (right < n){
            curr_sum += arr[right];
        }
        right++;
    }
    

    return {-1};

    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends