//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
	public:
		int LongestRepeatingSubsequence(string s1){
		    // Code here
		    string s2=s1;
		    int m=s1.size();
		    int n=s2.size();
		    
		    
		    
     
        
        int dp[m+1][n+1];
       for(int i=0;i<=m;i++){
           dp[i][0]=0;
       }
        for(int i=0;i<=n;i++){
            dp[0][i]=0;
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
             if(s1[i-1]==s2[j-1]  && i!=j){
          dp[i][j]=  1+dp[i-1][j-1];
        }
        else{
            dp[i][j]= max(dp[i-1][j],dp[i][j-1]);
        }   
            }
        }
       
       return dp[m][n]; 
		}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string str;
		cin >> str;
		Solution obj;
		int ans = obj.LongestRepeatingSubsequence(str);
		cout << ans << "\n";
	}
	return 0;
}
// } Driver Code Ends