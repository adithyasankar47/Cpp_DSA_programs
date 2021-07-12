#include <iostream>
#include <list>
//The list STL is made using doubly linked list 

using namespace std;
int main()
{
    list <int> l;
    l.push_front(1);
    l.push_back(2);

    for(int i:l){
        cout<<i<<" ";
    }

    l.erase(l.begin());
    cout<<"\nAfter erasing"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }

    return 0;
}