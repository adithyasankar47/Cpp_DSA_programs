#include <iostream>
#include <bits/stdc++.h>

using namespace std;

// Returns true is the string is balanced
bool isBalanced(string s)
{
    int i;
    char c;
    int n = s.length();

    stack<char> t;

    for (i = 0; i < n; i++)
    {
        c = s.at(i);

        if (t.empty())
        {
            t.push(c);
        }
        else if (t.top() == '(' && c == ')' || t.top() == '{' && c == '}' || t.top() == '[' && c == ']')
        {
            t.pop();
        }
        else
            t.push(c);
    }

    if (t.empty())
        return true;
    else
        return false;
}

int main()
{
    cout << "\n\nWelcome to Studytonight :-)\n\n\n";
    cout << " ===== Program to determine if the entered string is Balanced using Stack, in CPP  ===== \n\n\n";

    //initializing string to be checked for
    string s1 = "{{[[(())]]}}";
    string s2 = "{[(])}";

    bool b1 = isBalanced(s1);
    bool b2 = isBalanced(s2);

    if (b1)
    {
        cout << "The string " << s1 << " is Balanced.\n\n";
    }
    else
    {
        cout << "The string " << s1 << " is not Balanced.\n\n";
    }

    if (b2)
    {
        cout << "The string " << s2 << " is Balanced.\n\n";
    }
    else
    {
        cout << "The string " << s2 << " is not Balanced.\n\n";
    }

    return 0;
}