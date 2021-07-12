#include <iostream>
#include <algorithm>
#include <vector>
//

using namespace std;
int main()
{
    vector <int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);
    //The vector must be sorted else the search will fail
    cout<<"Finding 7-> "<<binary_search(v.begin(), v.end(),7)<<endl;

    cout<<"Lower Bound-> "<<lower_bound(v.begin(), v.end(),6)-v.begin()<<endl;
    cout<<"Upper Bound-> "<<upper_bound(v.begin(), v.end(),6)-v.begin()<<endl;

    int a=3, b=5;
    cout<<"Max of a and b is->"<<max(a,b)<<endl;
    cout<<"Min of a and b is->"<<min(a,b)<<endl;
    swap(a,b);
    cout<<"Value of a after swap-> "<<a<<endl;

    //Reversing a string
    string s="abcd";
    reverse(s.begin(), s.end());    
    cout<<"Reversed string is-> "<<s<<endl;

    //Rotating a vector
    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate-> "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    //Sorting a vector
    sort(v.begin(),v.end());
    cout<<"After sorting"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;    

    return 0;
}