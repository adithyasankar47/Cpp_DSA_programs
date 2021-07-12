#include <iostream>
#include <queue>
//Similar to max heap on default

using namespace std;
int main()  
{
    //max-heap
    priority_queue <int> maxi;

    //min-heap
    priority_queue <int, vector<int>, greater<int> > mini;

    mini.push(1);
    mini.push(3);
    mini.push(4);
    mini.push(0);
    
    maxi.push(1);
    maxi.push(3);
    maxi.push(4);
    maxi.push(0);
    
    int n = maxi.size();
    for(int i=0; i<n; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;

    int m = mini.size();
    for(int i=0; i<n; i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;

    return 0;
}