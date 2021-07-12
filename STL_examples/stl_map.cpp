#include <iostream>
#include <map>
//Similar to dicitionaries in python.
//Set of key value pairs

using namespace std;
int main()
{
    map <int, string> m;
    m[1] = "Legend";
    m[2] = "Games";
    m[198] = "Large";
    m[4] = "Lord";
    m.insert({66,"BHEL"});

    cout<<"Before erasing"<<endl;
    for(auto i:m){
        cout<<i.first<<"-> "<<i.second<<endl;
        //i.first prints the key
        //i.second prints the value associated with the key
        //key gets automatically sorted when we print
    }

    cout<<"Is 66 present-> "<<m.count(66)<<endl;
    cout<<"After erasing"<<endl;
    m.erase(4);
    for(auto i:m){
        cout<<i.first<<"-> "<<i.second<<endl;
    }
    
    //find returns an iterator of that particular element
    cout<<"Finding"<<endl;
    auto it =m.find(66);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<"->"<<(*i).second<<endl;
    }


    return 0;
}