#include <iostream>
#include <queue>
//FIFO

using namespace std;
int main()
{
    queue <string> s;
    s.push("I");
    s.push("love");
    s.push("C++");
    cout<<"First Element-> "<<s.front()<<endl;
    s.pop();
    cout<<"First Element-> "<<s.front()<<endl;

    return 0;

}