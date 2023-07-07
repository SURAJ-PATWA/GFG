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
    //Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int s, int e)
    {
        // code here
        if(s>=e)return;
        int pivot=partition(arr,s,e);
        quickSort(arr,s,pivot-1);
        quickSort(arr,pivot+1,e);
    }
    
    public:
    int partition (int arr[], int s, int e)
    {
       // Your code here
        int pivot=arr[s];
        int count=0;
        for(int i=s+1;i<=e;i++){
            if(arr[i]<=pivot)count++;
        }
        //find pivot ka shi place
        int pivotIndex=s+count;
        swap(arr[pivotIndex],arr[s]);
        
        //left and right ko set karenge
        
        int i=s;int j=e;
        while(i< pivotIndex && j>pivotIndex){
            while(arr[i]<=pivot){
                i++;
            }
            while(arr[j]>pivot){
                j--;
            }
            if(i< pivotIndex && j>pivotIndex){
                swap(arr[i++],arr[j--]);
            }
        }
        return pivotIndex;
    }
};



//{ Driver Code Starts.
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
      Solution ob;
    ob.quickSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends