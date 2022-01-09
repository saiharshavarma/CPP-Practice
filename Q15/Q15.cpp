#include <iostream>
using namespace std;

int taxCalculator(int grossSalary, int totalSavings)
{
    int taxableIncome;
    int tax;
    if (totalSavings >= 100000)
        taxableIncome = grossSalary - 100000;
    else
        taxableIncome = grossSalary - totalSavings;

    if (taxableIncome <= 100000)
        tax = 0;
    else if (taxableIncome > 100000 && taxableIncome <= 200000)
        tax = 0.1 * (taxableIncome - 100000);
    else if (taxableIncome > 200000 && taxableIncome <= 500000)
        tax = (0.2 * (taxableIncome - 200000)) + (0.1 * 100000) + 0;
    else
        tax = (0.3 * (taxableIncome - 500000)) + (0.2 * 300000) + (0.1 * 100000) + 0;
    return tax;
}

int main()
{
    int grossSalary, totalSavings;
    cout << "Enter your Gross Salary:" << endl;
    cin >> grossSalary;
    cout << "Enter your Total Savings: " << endl;
    cin >> totalSavings;
    cout << "Calculated Tax: " << taxCalculator(grossSalary, totalSavings);
    return (0);
}