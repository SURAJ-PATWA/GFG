//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int s, int m, int e)
    {
         // Your code here
         int n1=m-s+1;int n2=e-m;
         int left[n1];int right[n2];
         
         //copy data
         int k=s;
         for(int i=0;i<n1;i++){
             left[i]=arr[k++];
         }
          k=m+1;
         for(int j=0;j<n2;j++){
             right[j]=arr[k++];
         }
         
         //now merge 2 sorted array
         int i=0,j=0;k=s;
         while(i<n1 && j<n2){
           if(left[i]<=right[j]){
               arr[k++]=left[i++];
           }  
           else{
                arr[k++]=right[j++];
           }
         }
         while(i<n1){
              arr[k++]=left[i++];
         }
         while(j<n2){
             arr[k++]=right[j++]; 
         }
         
         
    }
    public:
    void mergeSort(int arr[], int s, int e)
    {
        //code here
        if(s<e){
            int mid=(s+e)/2;
            mergeSort(arr,s,mid);
            mergeSort(arr,mid+1,e);
            merge(arr,s,mid,e);
            
        }
        
        
        
        
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends