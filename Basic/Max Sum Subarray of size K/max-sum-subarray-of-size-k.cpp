//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution{   
public:
    long maximumSumSubarray(int k, vector<int> &arr , int n){
        // code here 
        long max_sum=0;
        for(int i=0;i<k;i++){
            max_sum+=arr[i];
        }
      long  window_sum=max_sum;
        for(int i=k;i<n;i++){
            window_sum+=arr[i]-arr[i-k];
            max_sum=max(max_sum,window_sum);
        }
        return max_sum;
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N,K;
        cin >> N >> K;;
        vector<int>Arr;
        for(int i=0;i<N;++i){
            int x;
            cin>>x;
            Arr.push_back(x);
        }
        Solution ob;
        cout << ob.maximumSumSubarray(K,Arr,N) << endl;
    }
    return 0; 
} 
// } Driver Code Ends