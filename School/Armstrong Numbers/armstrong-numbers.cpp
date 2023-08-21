//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int num){
        // code here
        int n=num;int sum=0;
        while(n){
           int rem=n%10;
           sum+=pow(rem,3);
           n=n/10;
        }
        return sum==num?"Yes":"No";
    }
};
//  string armstrongNumber(int N){
//         // code here
//         int n=N;
//     int sum=0;
//     while(n>0){
//         int rem=n%10;
//         sum+=pow(rem,3);
//         n=n/10;
        
//     }
//     if(sum==N)return "Yes";
//     return "No";

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends