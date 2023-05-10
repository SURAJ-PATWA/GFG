//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  
  
  
  
  
  
  
  
    vector<vector<int>> rotateMatrix(int n, int m, int k,
                                     vector<vector<int>> Mat) {
        // code here
        vector<vector<int>>vec(n,vector<int>(m));
         for(int i=0; i<n; i++){
         for(int j=0;j<m;j++){
         int temp=(k+j)%m;
         vec[i][j]=Mat[i][temp];
        
    }}
    return vec;
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> N >> M >> K;
        vector<vector<int>> Mat(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> Mat[i][j];
        Solution ob;
        vector<vector<int>> ans = ob.rotateMatrix(N, M, K, Mat);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) cout << ans[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends