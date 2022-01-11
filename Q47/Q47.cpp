#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    cout << "Enter String 1: " << endl;
    cin >> s1;
    cout << "Enter String 2: " << endl;
    cin >> s2;
    string s = s1 + s2;
    cout << "The concatenation of both string: " << s << endl;
    return (0);
}