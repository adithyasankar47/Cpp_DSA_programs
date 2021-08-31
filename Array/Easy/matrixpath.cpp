#include <iostream>
using namespace std;
void findPaths(int i, int j, int arr[2][2], int n, int m, string s) {
    if(i>=n||j>=m)
        return;
    if(i==n-1||j==m-1) {
        cout<<s<<endl;
        return;
    }
    s+='D';
    findPaths(i+1,j,arr,n,m,s);
    s.pop_back();
    s+='R';
    findPaths(i,j+1,arr,n,m,s);
    s.pop_back();
}
int main() {
    int arr[2][2]={0,1,2,3};
    string s="";
    findPaths(0,0,arr,2,2,s);
    return 0;
}