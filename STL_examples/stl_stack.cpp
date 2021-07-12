#include <iostream>
#include <stack>
//LIFO

using namespace std;
int main()
{
    stack <string> s;
    s.push("A");
    s.push("Good");
    s.push("Movie");

    cout<<"Top element-> "<<s.top()<<endl;
    s.pop();
    cout<<"Top element-> "<<s.top()<<endl;
    cout<<"Size of stack-> "<<s.size()<<endl;
    cout<<"Empty or not-> "<<s.empty()<<endl;
    


    return 0;
}