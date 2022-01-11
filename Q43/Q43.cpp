#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string reverseString(string s)
{
    string revstr;
    for (int counter = 0; counter < s.length(); counter++)
    {
        revstr += s[s.length() - 1 - counter];
    }
    return revstr;
}

int main()
{
    string s;
    cout << "Enter the string to be reversed: " << endl;
    cin >> s;
    cout << "The reversed string without any predefined function is: " << reverseString(s) << endl;
    reverse(s.begin(), s.end());
    cout << "The reversed string using predefined function is : " << s << endl;
    return (0);
}