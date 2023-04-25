//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        map<int,char>m;
        
        
        for(int i=0;i<str.size();i++){
            m[str[i]]++;
        }
        int maxi=-1;
        char ans;
        for(auto i:m){
            if(i.second>maxi){
                maxi=i.second;
                ans=i.first;
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
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends