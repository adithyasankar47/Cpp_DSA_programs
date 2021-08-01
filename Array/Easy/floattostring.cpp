#include <iostream>
#include <bits/stdc++.h>
using namespace std;
template <typename T>
string itos(T i)
{
    stringstream s;
    s << i;
    return s.str();
}
int main()
{
    long double i = 346.235256;
    string ss = itos(i);
    cout << ss << endl;
    return 0;
}
