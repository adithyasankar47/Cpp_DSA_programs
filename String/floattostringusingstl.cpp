#include <iostream>
#include <string>
using namespace std;

int main()
{

    float n1 = 123.456;
    double n2 = 0.456;
    double n3 = 1e-40;
    string num_str1(to_string(n1));
    string num_str2(to_string(n2));
    string num_str3(to_string(n3));
    num_str1.empty() ? cout << "empty\n" : cout << num_str1 << endl;
    num_str2.empty() ? cout << "empty\n" : cout << num_str2 << endl;
    num_str3.empty() ? cout << "empty\n" : cout << num_str3 << endl;

    return EXIT_SUCCESS;
}