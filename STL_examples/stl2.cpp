#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector <int> a(5,1); //initializes vector a of size with 1 as the element
    vector <int> last(a);
    //capacity gets doubled if overflow occurs
    vector <int> v;
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity-> "<<v.capacity()<<endl;
    //Capacity is the number of memory locations allotted for the vector
    cout<<"Size-> "<<v.size()<<endl;
    //Size is the number of memory locations used by the vector
    cout<<"Element at 2nd Index is "<<v.at(2)<<endl;
    cout<<"First element-> "<<v.front()<<endl;
    cout<<"Last element-> "<<v.back()<<endl;
    cout<<"Before pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();
    cout<<"After pop"<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Size before clear-> "<<v.size()<<endl;
    v.clear();
    cout<<"Size after clear-> "<<v.size()<<endl;
    
    cout<<"a"<<endl;
    for(int i:a)
    {
        cout<<i<<" ";
        
    }cout<<endl;

    cout<<"last"<<endl;
    for(int i:last)
    {
        cout<<i<<" ";
        
    }cout<<endl;







    return 0;
}