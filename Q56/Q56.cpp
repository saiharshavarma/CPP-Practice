#include <iostream>
#include <string>
using namespace std;

string reverseString(string s)
{
    string revstring;
    for (int counter = 0; counter < s.length(); counter++)
    {
        revstring += s[s.length() - 1 - counter];
    }
    return revstring;
}

int main()
{
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    s += ' ';
    string substring = "";
    string str = "";
    int counter = 0;
    string delimiter = "";
    while (counter < s.length())
    {
        substring = "";
        delimiter = "";
        while (s[counter] != ' ' && s[counter] != '.' && s[counter] != ',' && s[counter] != '\t' && counter < s.length())
        {
            substring += s[counter];
            if (s[counter + 1] == ' ')
                delimiter = " ";
            else if (s[counter + 1] == '.')
                delimiter = ".";
            else if (s[counter + 1] == ',')
                delimiter = ",";
            else if (s[counter + 1] == '\t')
                delimiter = "\t";
            else
                delimiter = "";
            counter++;
        }
        str = str + reverseString(substring) + delimiter;
        counter++;
    }
    cout << str << endl;
    return (0);
}