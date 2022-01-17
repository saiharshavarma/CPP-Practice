#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    string word = "the";
    string str = "";
    string substring = "";
    int counter = 0;
    while (counter < s.length())
    {
        substring = "";
        while (s[counter] != ' ' && counter < s.length())
        {
            substring = substring + s[counter];
            counter++;
        }
        if (substring != word)
            str = str + substring + ' ';
        counter++;
    }
    cout << str << endl;
    return (0);
}