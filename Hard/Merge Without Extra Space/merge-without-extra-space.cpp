//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
class Solution{
    public:
        //Function to merge the arrays.
        void merge(long long arr1[], long long arr2[], int n, int m) 
        { 
            // code here 
            long long arr[n+m];
            for(int i=0;i<n;i++){
                arr[i]=arr1[i];
            }
            for(int j=0;j<m;j++){
                arr[n+j]=arr2[j];
            }
            sort(arr,arr+n+m);
            for(int i=0;i<n;i++){
                arr1[i]=arr[i];
            }
            for(int i=0;i<m;i++){
                arr2[i]=arr[n+i];
            }
            
        } 
    //     long arr[]=new long[m+n];
    // for(int i=0;i<n;i++){
    //     arr[i]=arr1[i];
    // }
    // for(int j=0;j<m;j++){
    //     arr[n+j]=arr2[j];
    // }
    // Arrays.sort(arr);
    // for(int i=0;i<n;i++){
    //     arr1[i]=arr[i];
    // }
    //  for(int j=0;j<m;j++){
    //      arr2[j]=arr[n+j];
    //  }
};

//{ Driver Code Starts.

int main() 
{ 
	
	int T;
	cin >> T;
	
	while(T--){
	    int n, m;
	    cin >> n >> m;
	    
	    long long arr1[n], arr2[m];
	    
	    for(int i = 0;i<n;i++){
	        cin >> arr1[i];
	    }
	    
	    for(int i = 0;i<m;i++){
	        cin >> arr2[i];
	    }
	    Solution ob;
	    ob.merge(arr1, arr2, n, m); 

        for (int i = 0; i < n; i++) 
            cout<<arr1[i]<<" "; 
        
       
	    for (int i = 0; i < m; i++) 
		    cout<<arr2[i]<<" "; 
	    
	    cout<<endl;
	}

	return 0; 
} 

// } Driver Code Ends