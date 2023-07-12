//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    private:
     Node* addTwoNumbers(Node* h1, Node* h2) {
        Node *dummy=new Node(-1);Node *curr=dummy;
        int carry=0;
        while(h1||h2||carry){
            int sum=0;
            if(h1){
                sum+=h1->data;
                h1=h1->next;
            }
            if(h2){
                sum+=h2->data;
                h2=h2->next;
            }
            sum+=carry;
            carry=sum/10;
            Node *temp=new Node(sum%10);
            curr->next=temp;
            curr=temp;
            
        }
        return dummy->next;
    }
    
    Node *reverse(Node *head){
        Node *prev=NULL;
        Node *curr=head;
        while(curr){
            Node *temp=curr->next;
            curr->next=prev;
            prev=curr;
            curr=temp;
        }
        return prev;
        
        
        
    }
    // ListNode * curr=head;
    //     ListNode *prev=NULL;
    //     while(curr){
    //         ListNode *temp=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=temp;
    //     }
        
    //     return prev;
    
    
    
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        // code here
        //step1 reverse first
        first=reverse(first);
        
        //step2 reverse second
        second=reverse(second);
        //step 3 add 
        Node *add=addTwoNumbers(first,second);
        //step 4 revese add
        return reverse(add);
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends