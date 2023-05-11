//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	public:
	vector<int> downwardDiagonal(int n, vector<vector<int>> arr)
	{
		// Your code goes here
		
		vector<int>ans;
		//add data with the digonal element
		for(int i=0;i<n;i++){
		    int t=0;
		 for(int j=i;j>=0;j--){
		     ans.push_back(arr[t][j]);
		     t++;
		 }   
		}
		// after the digonal
		for(int i=1;i<n;i++){
		    int t=i;
		    for(int j=n-1;j>=i;j--){
		        ans.push_back(arr[t][j]);
		        t++;
		    }
		}
		return ans;
		
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDiagonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends