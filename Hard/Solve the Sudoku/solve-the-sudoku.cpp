//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
// UNASSIGNED is used for empty cells in sudoku grid 
#define UNASSIGNED 0  

// N is used for the size of Sudoku grid.  
// Size will be NxN  
#define N 9  


// } Driver Code Ends
class Solution 
{
    public:
    //Function to find a solved Sudoku. 
    
    
     bool issafe(int row,int col,int board[N][N],int val){
    for(int i=0;i<9;i++){
        //row check
        if(board[row][i]==val)return false;
        //row col
        if(board[i][col]==val)return false;
        //3 X 3 matrix check
        if(board[3*(row/3)+i/3][3*(col/3)+i%3]==val)return false;
    }
    return true;

}
    bool SolveSudoku(int board[N][N])  
    { 
        // Your code here
        
for (int row = 0; row < 9; row++) {
  for (int col = 0; col < 9; col++) {
  if(board[row][col]==0){
  for(int val=1;val<=9;val++){
      if(issafe(row,col,board,val)){
          board[row][col]=val;
          //recursive call
          bool aggesolutionpossible=SolveSudoku(board);
          if(aggesolutionpossible){// mean next gap haa aak me tum 1 rak rahe ho agar waha 1 na rakw=e kuch aur shi rakega to
              return true;
          }
          else{
              // backtracking
              board[row][col]=0;

          }
      }
    }
    return false;
  }
  
  }
}
return true;

        
    }
   


    
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
          if(SolveSudoku(grid)){
            for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                    cout<<grid[i][j]<<" ";
                }
            }
        }
    
    }
};

//{ Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
// } Driver Code Ends