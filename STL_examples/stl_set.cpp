#include <iostream>
#include <set>
//Stores an element only once. Prevents duplicates
//When you try to print you get element in sorted order
//Unordered set will print elements in random order
//Unordered set is faster

using namespace std;
int main()
{
    set <int> s;
    s.insert(5);
    s.insert(1);
    s.insert(8);
    s.insert(0);
    for(auto i:s){
        cout<<i<<endl;
    }
    
    s.erase(s.begin());
    for(auto i:s){
        cout<<i<<endl;
    }

    s.insert(64);
    //s.erase(s.begin(), s.begin()+2); doesn't work
    set <int>:: iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<endl;
    }

    cout<<s.count(5);
    //Tells whether an element is present or not
    
    //Used to find where an element is present
    set <int>:: iterator itr = s.find(8);
    
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;
    //cout<<itr; doen't work as we can't print an iterator
    
    return 0;
}