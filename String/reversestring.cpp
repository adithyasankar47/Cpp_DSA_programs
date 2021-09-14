#include <iostream>
#include <string>
using namespace std;
int pali(string s, int i, int n){
    if(i>=n/2)
        return 1;
    if(s[i]==s[n-i-1])
        return pali(s,i+1,n);
    else
        return 0;
}
int main(){
    string s="lol";
    cout<<pali(s,0,3);
    return 0;
}