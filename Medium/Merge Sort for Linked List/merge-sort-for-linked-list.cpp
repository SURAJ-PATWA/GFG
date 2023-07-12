//{ Driver Code Starts
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};


// } Driver Code Ends
/* Structure of the linked list node is as
struct Node 
{
    int data;
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
*/


class Solution{
    
     Node* mergeTwoLists(Node* head1, Node* head2) {
         if(head1==NULL)return head2;
         if(head2==NULL)return head1;
       Node *dummy=new Node(-1); Node*dummyhead=dummy;Node *curr1=head1;Node *curr2=head2;
    while(curr1 && curr2){
        if(curr1->data<=curr2->data){
            dummy->next=curr1;
            curr1=curr1->next;
        }
        else{
            dummy->next=curr2;
            curr2=curr2->next;
        }
        dummy=dummy->next;
    }
    
    while(curr1){
        dummy->next=curr1;
            curr1=curr1->next;
             dummy=dummy->next;
    }
    while(curr2){
       dummy->next=curr2;
            curr2=curr2->next; 
                         dummy=dummy->next;

    }
    return dummyhead->next;

    }
    
    
    Node *findmid(Node *head){
        Node *slow=head;Node *fast=head->next;
        while(fast && fast->next){
           
            slow=slow->next;
             fast=fast->next->next;
        }
        return slow;
    }
    
    
    
  public:
    //Function to sort the given linked list using Merge Sort.
    Node* mergeSort(Node* head) {
        // your code here
        
        //step 1 base case
       if(head==NULL || head->next==NULL)return head;
        
        //step2 divide 2 part left and right
        Node *mid=findmid(head);
        Node *left=head;Node *right=mid->next;
        mid->next=NULL; // Disconnect the two halves
       
        
        // recursive call
        left=mergeSort(left);
        right=mergeSort(right);
        
        //step 3 merge both sort linkdlist
        Node* result= mergeTwoLists(left, right);
        return result;
    }
};


//{ Driver Code Starts.

void printList(Node* node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

void push(struct Node** head_ref, int new_data) {
    Node* new_node = new Node(new_data);

    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main() {
    long test;
    cin >> test;
    while (test--) {
        struct Node* a = NULL;
        long n, tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            push(&a, tmp);
        }
        Solution obj;
        a = obj.mergeSort(a);
        printList(a);
    }
    return 0;
}
// } Driver Code Ends