#include <iostream>
using namespace std;

bool checkString(string s1, string s2)
{
    int Flag = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        Flag = 0;
        for (int j = 0; j < s2.length(); j++)
            if (s1[i] == s2[j])
            {
                Flag = 1;
                break;
            }
        if (!Flag)
            return false;
    }
    return true;
}

int main()
{
    string s1;
    string s2;
    cout << "Enter string 1: " << endl;
    cin >> s1;
    cout << "Enter string 2: " << endl;
    cin >> s2;
    if (checkString(s1, s2) && checkString(s2, s1))
        cout << s1 << " and " << s2 << " are anagrams" << endl;
    else
        cout << s1 << " and " << s2 << " are not anagrams" << endl;
    return (0);
}