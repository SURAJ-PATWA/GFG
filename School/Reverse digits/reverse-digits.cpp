//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
		long long int reverse_digit(long long int n)
		{
		    // Code here
		     long long ans=0;
        while(n!=0){
            int rem=n%10;
        //   if((ans > INT_MAX/10)||(ans<INT_MIN/10)){  // // check for overflow before adding next digit
               
        //           return 0;
        //       }
            ans=ans*10+rem;
            n=n/10;
        }
        return ans;
		}
};

//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	long long int n;
    	cin >> n;
    	Solution ob;
    	long long int  ans = ob.reverse_digit(n);
    	cout << ans <<"\n";
    }
	return 0;
}
// } Driver Code Ends