#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    string str, str2, str3;
    cout << "Enter string: " << endl;
    getline(cin, str);
    cout << "Enter the string to be replaced: " << endl;
    cin >> str2;
    int str2len = str2.length();
    cout << "Enter the replacing string: " << endl;
    cin >> str3;
    int counter = 0;
    string substring = "";
    string s = "";
    while (counter < str.length())
    {
        substring = "";
        while (str[counter] != ' ' && counter < str.length())
        {
            substring = substring + str[counter];
            counter++;
        }
        cout << substring;
        if (substring.length() > str2.length())
            substring.replace(substring.find(str2), str2.length(), str3);
        s = s + substring + ' ';
        counter++;
    }
    cout << s;
    return 0;
}
