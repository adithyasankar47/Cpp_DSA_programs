//Always use addreses
#include <iostream>
#include <vector>
using namespace std;
void permute(vector<int> arr, vector<int> &ans, int i,int n){
    if(i==n)  {
        for(auto i: ans)
            cout<<i<<" ";
        cout<<endl;
        return ;
    }  
    ans.push_back(arr.at(i));
    permute(arr,ans,i+1,n);
    ans.pop_back();
    permute(arr,ans,i+1,n);
}
int main(){
    vector<int> arr,ans;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    permute(arr,ans,0,arr.size());
    return 0;
}