//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:


int dp[501][501];
int solve(string s,int i,int j){
    
    
    
    if(i>=j)return 0;
    if (dp[i][j] != -1) return dp[i][j];
    if(ispalindrom(s,i,j)==true)return  dp[i][j]=0;
    int mn=INT_MAX;
    for(int k=i;k<j;k++){
        
        // write your code for more optimize
        int left=0;int right=0;
        if(dp[i][k]!=-1){
            left=dp[i][k];
        }
        else{
            left=solve(s,i,k);
            dp[i][k]=left;
        }
         if(dp[k+1][j]!=-1){
            right=dp[k+1][j];
        }
        else{
            right=solve(s,k+1,j);
            dp[k+1][j]=right;
        }
        
        int temp=1+left+right;
        if(temp <mn){
            mn=temp;
        }
    }
    return dp[i][j]= mn;
}

bool ispalindrom(string s,int i,int j){
  while(i<j){
       if(s[i]!=s[j])return false;
       else{
           i++;j--;
       }
      
    
}
 return true;
}
    int palindromicPartition(string str)
    {
        // code here
        memset(dp,-1,sizeof(dp));
        return solve(str,0,str.size()-1);
        
        
        
        
        
        
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends