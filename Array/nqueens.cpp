#include <iostream>
#include <vector>
using namespace std;

bool isSafe(int row,int col, vector<vector<int>> &mat, int n) {
    for(int i=row, j=col; i>=0 && j>=0; --i,--j)
        if(mat[i][j]==1) return false;
    for(int i=row, j=col; i>=0 && j>=0; i,--j)
        if(mat[i][j]==1) return false;
    for(int i=row, j=col; i<n && j>=0; i++,j++)
        if(mat[i][j]==1) return false;
}

bool NQueen(int col, vector<vector<int>> &mat, int n) {
    if(col==n){
        for(int i=0; i<n; ++i)
            for(int j=0; j<n; ++j)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        return true;
    }

    for(int row=0; row<n; ++row) {
        if(isSafe(row,col,mat,n)) {
            mat[row][col]=1; 
            if(NQueen(col+1,mat,n)==true) return true; 
            mat[row][col]=0;
        }
    }
    return false;
}

void Solve(){
    int n;
    cin>>n;
    vector<vector<int>> mat(n, vector<int>(n,0));
    NQueen(0,mat,n);  
}


int main()
{
    return 0;
}
