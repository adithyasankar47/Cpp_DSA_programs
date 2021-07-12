#include <iostream>
#include <deque>
using namespace std;
int main()
{
    deque <int> d;
    d.push_back(1);
    d.push_back(12);
    d.push_back(145);
    d.push_front(2);

    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_back();
    cout<<"\nAfter popping"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_front();
    cout<<"\nAfter popping front"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }

    cout<<"\nFirst index element-> "<<d.at(1)<<endl;
    cout<<"Front-> "<<d.front()<<endl;
    cout<<"Back-> "<<d.back()<<endl;
    cout<<"Empty or not-> "<<d.empty()<<endl;

    //Deleting an element which is not in the front or back
    cout<<"Before erase"<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1);
    cout<<"After erase"<<d.size()<<endl;

    return 0;
}