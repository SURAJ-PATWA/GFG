//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    
	    set<int>s(arr,arr+n);
	   
	    
	    if (s.size() < 2) {
        return -1; // there is no second largest element
    }
    auto it=prev(s.end(),2);
    return *it;
    //       auto it = prev(s.end(), 2);
    // int ans = *it; // dereference the iterator to get the element
    // return ans;
    
    
          
          
          	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends