#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string" << endl;
    getline(cin, s);
    for (int counter = 0; counter < s.length(); counter++)
    {
        if (s[counter] == 'a' || s[counter] == 'e' || s[counter] == 'i' || s[counter] == 'o' || s[counter] == 'u' || s[counter] == ' ')
            cout << s[counter];
    }
    return (0);
}