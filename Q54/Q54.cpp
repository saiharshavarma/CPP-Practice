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
    return revstr;
}

int main()
{
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    int counter = 0;
    string substring = "";
    string str = "";
    while (counter < s.length())
    {
        substring = "";
        while (s[counter] != ' ' && counter < s.length())
        {
            substring = substring + s[counter];
            counter++;
        }
        if (substring == reverseString(substring) && substring.length() > 1)
            for (int i = 0; i < substring.length(); i++)
                str += '*';
        else
            str += substring;
        str += ' ';
        counter++;
    }
    cout << str << endl;
    return (0);
}