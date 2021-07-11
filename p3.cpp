#include <iostream>
using namespace std;
void reverse(string s)
{
    string rev;
    if(s.length()==0)
    {
        return;
    }
    rev=s.substr(1);
    reverse(rev);
    cout<<s[0];
}
int main()
{
    reverse("binod");
    return 0;
}
