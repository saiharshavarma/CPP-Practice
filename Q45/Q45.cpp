#include <iostream>
#include <string>
using namespace std;

int checksubstring(string s, string find)
{
    int freq = 0;

    for (int counter1 = 0; counter1 < s.length(); counter1++)
    {
        int counter2;
        for (counter2 = 0; counter2 < find.length(); counter2++)
            if (s[counter1 + counter2] != s[counter2])
                break;

        if (counter2 == find.length())
            freq++;
    }
    return freq;
}

int main()
{
    string s, find;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    cout << "Enter the text to be found: " << endl;
    cin >> find;
    cout << "The frequency of " << find << " in " << s << " is " << checksubstring(s, find) << endl;
    return (0);
}