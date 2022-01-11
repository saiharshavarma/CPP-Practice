#include <iostream>
#include <string>
using namespace std;

string reverseString(string s)
{
    string revstr;
    for (int counter = 0; counter < s.length(); counter++)
    {
        revstr += s[s.length() - 1 - counter];
    }
    if (s == revstr)
        return " a Palindrome";
    return " not a Palindrome";
}

int main()
{
    string s;
    cout << "Enter the string to be reversed: " << endl;
    cin >> s;
    cout << s << " is" << reverseString(s) << endl;
    return (0);
}