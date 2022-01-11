#include <iostream>
#include <string>
using namespace std;

int *freq(string s)
{
    int *count = new int[4];
    for (int counter = 0; counter < 4; counter++)
        count[counter] = 0;
    for (int counter = 0; counter < s.length(); counter++)
    {
        if (s[counter] == 'a' || s[counter] == 'e' || s[counter] == 'i' || s[counter] == 'o' || s[counter] == 'u')
            count[0] += 1;
        else if (s[counter] == ' ')
            count[3] += 1;
        else if (int(s[counter]) <= 57 && int(s[counter]) >= 48)
            count[2] += 1;
        else
            count[1] += 1;
    }
    return count;
}

int main()
{
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);
    int *count = new int[4];
    count = freq(s);
    cout << "The number of vowels in the string: " << count[0] << endl;
    cout << "The number of consonents in the string: " << count[1] << endl;
    cout << "The number of digits in the string: " << count[2] << endl;
    cout << "The number of white spaces in the string: " << count[3] << endl;
    delete[] count;
    return (0);
}