//{ Driver Code Starts

#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* Function to replace every element with the
	next greatest element */
	void nextGreatest(int arr[], int n) {
	    // code here
	    // create a maxium Heap so that you can maxi top element
	    priority_queue<int>pq;
	    pq.push(-1);
	    for(int i=n-1;i>=0;i--){
	        int ans=pq.top();
	        
	        pq.push(arr[i]);
	        arr[i]=ans;
	    }
	    
	    
	    
	    
	}


};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, l, r;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.nextGreatest(arr, n);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends