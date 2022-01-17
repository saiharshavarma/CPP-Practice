#include <iostream>
#define SI(p, r, t) ((p * r * t) / 100)
using namespace std;

int main()
{
    int principle, rate, time;
    cout << "Enter the principle amount: " << endl;
    cin >> principle;
    cout << "Enter the rate of interest: " << endl;
    cin >> rate;
    cout << "Enter the time period: " << endl;
    cin >> time;
    cout << "The simple interest is: " << SI(principle, rate, time) << endl;
    return (0);
}