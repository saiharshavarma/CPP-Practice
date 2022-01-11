#include <iostream>
#include <string>
using namespace std;

string *computeLength(string s)
{
    int minlength = s.length();
    int maxlength = 0;
    int length = 0;
    string minString;
    string maxString;
    string tempString = "";
    for (int counter = 0; counter < s.length(); counter++)
    {
        if (s[counter] != ' ')
        {
            tempString += s[counter];
            length++;
        }
        else
        {
            if (length < minlength)
            {
                minString = tempString;
                minlength = length;
            }
            if (length > maxlength)
            {
                maxString = tempString;
                maxlength = length;
            }
            tempString = "";
            length = 0;
        }
    }
    string *arr = new string[2];
    arr[0] = minString;
    arr[1] = maxString;
    return arr;
}

int main()
{
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    string *arr = new string[2];
    arr = computeLength(s);
    cout << "The largest word in the string is " << arr[1] << endl;
    cout << "The smallest word in the string is " << arr[0] << endl;
    delete[] arr;
    return (0);
}