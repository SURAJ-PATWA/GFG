//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}


// } Driver Code Ends


//User function Template for C++

string reverseWord(string s){
    
  //Your code here
    int i=0;int j=s.size()-1;
        while(i<=j){
            swap(s[i],s[j]);
            i++;j--;
        }
        return s;
}

