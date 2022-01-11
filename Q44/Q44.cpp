#include <iostream>
using namespace std;

int main()
{
    string s;
    cout << "Enter the string: " << endl;
    cin >> s;
    int length = 0;
    while (s[length] != '\0')
        length++;

    cout << "The length of the string is " << length << endl;
    return (0);
}