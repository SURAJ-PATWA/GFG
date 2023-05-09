//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                                 
                                                 
    // Initialize variables
    vector<long long> ans; // to store the result
    int i = 0, j = 0; // pointers to represent the start and end of the window
    queue<int> q; // to store negative integers found in the current window

    // Iterate over the array
    while (j < N) {
        // If the current element is negative, add it to the queue
        if (A[j] < 0) {
            q.push(A[j]);
        }

        // Check if the window size is less than K
        if (j - i + 1 < K) {
            j++; // expand the window to the right
        }
        // If the window size is equal to K
        else if (j - i + 1 == K) {
            // If the queue is empty, add 0 to the result
            if (q.empty()) {
                ans.push_back(0);
            }
            // Otherwise, add the first element of the queue to the result
            else {
                ans.push_back(q.front());
            }

            // If the first element of the queue is equal to the element going out of the window,
            // remove it from the queue
            if (A[i] == q.front()) {
                q.pop();
            }

            // Slide the window to the right
            i++;
            j++;
        }
    }

    // Return the result vector
    return ans;
}

                                                