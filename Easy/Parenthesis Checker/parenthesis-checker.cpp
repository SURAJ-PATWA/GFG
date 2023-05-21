//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
        
        
        stack<int>st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='{'||s[i]=='['||s[i]=='('){
              st.push(s[i]); 
            }
            else{
                if(st.empty())return false;
if(st.top()=='(' && s[i]==')' || st.top()=='[' && s[i]==']'|| st.top()=='{' && s[i]=='}'            )                 
{st.pop();
}     
                else{
                    return false;
                }
            }
           
        }
         return st.empty();
    }

};

// stack<int>st;
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='('||s[i]=='{'||s[i]=='['){
//                 st.push(s[i]);
//             }
//             else{
//                 if(st.empty())return false;
//                 if(st.top()=='(' && s[i]==')' || st.top()=='[' && s[i]==']'|| st.top()=='{' && s[i]=='}'            ){
//                     st.pop();
//                 }
//                 else{
//                     return false;
//                 }
                
//             }
//         }
//         return st.empty();
//     }

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends