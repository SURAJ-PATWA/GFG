//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{   
    public: 
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > mat, int r, int c) 
    {
        // code here 
    // }
    // vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int n=mat.size();
        int m=mat[0].size();
        int left=0;int right=m-1;
        int top=0;int bottom=n-1;
        while(left<=right && top<=bottom){
            //  right
            for(int i=left;i<=right;i++){
                ans.push_back(mat[top][i]);
            }
            top++;
            
            //bottom
            
           for(int i=top;i<=bottom;i++){
               ans.push_back(mat[i][right]);
           } 
            right--;
            
            //left            ager single  array ho to 
            if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
            }
            
            //top  ager single element ho to kuch restristion hoga
            if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(mat[i][left]);
            }
            left++;}
            
            
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin>>t;
    
    while(t--) 
    {
        int r,c;
        cin>>r>>c;
        vector<vector<int> > matrix(r); 

        for(int i=0; i<r; i++)
        {
            matrix[i].assign(c, 0);
            for( int j=0; j<c; j++)
            {
                cin>>matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
                cout<<result[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends