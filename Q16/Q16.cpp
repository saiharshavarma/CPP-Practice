#include <iostream>
using namespace std;

int isLeap(int year)
{
    if ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0)))
        return 1;
    return 0;
}

int main()
{
    int dob_yyyy, dob_mm, dob_dd;
    int current_yyyy, current_mm, current_dd;
    cout << "Enter your Date of Birth in the format YYYY MM DD" << endl;
    cin >> dob_yyyy >> dob_mm >> dob_dd;
    cout << "Enter the current date in the format YYYY MM DD" << endl;
    cin >> current_yyyy >> current_mm >> current_dd;

    if ((dob_dd > 31 || dob_dd <= 0 || current_dd > 31 || current_dd <= 0) || (dob_mm > 12 || dob_mm <= 0 || current_mm > 12 || current_mm <= 0) || (dob_yyyy > 9999 || dob_yyyy <= 0000 || current_yyyy > 9999 || current_yyyy <= 0))
    {
        cout << "Invalid Input" << endl;
        return (-1);
    }

    int noLeapYears = 0;
    for (int counter = dob_yyyy + 1; counter < current_yyyy; counter++)
        if (isLeap(counter))
            noLeapYears += 1;

    int ageinYears, ageinMonths, ageinDays;
    // Age in Years
    if ((current_mm < dob_mm) || (current_mm == dob_mm && current_dd < dob_dd))
        ageinYears = current_yyyy - dob_yyyy - 1;
    else
        ageinYears = current_yyyy - dob_yyyy;

    cout << "Age in Years: " << ageinYears << endl;

    // Age in Months
    ageinMonths = ((current_yyyy) - (dob_yyyy + 1)) * 12 + (12 - dob_mm);
    if ((current_mm > dob_mm) || (current_mm == dob_mm && current_dd > dob_dd))
        ageinMonths += current_mm;
    cout << "Age in Months: " << ageinMonths << endl;

    // Age in Days
    int month[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
    ageinDays = ((current_yyyy) - (dob_yyyy + 1)) * 365 + noLeapYears;
    if (isLeap(dob_yyyy) && dob_mm <= 2)
        ageinDays += 366 - (month[dob_mm - 1] + dob_dd);
    else
        ageinDays += 365 - (month[dob_mm - 1] + dob_dd);
    if (isLeap(current_yyyy) && current_mm > 2)
        ageinDays += month[current_mm - 1] + current_dd + 1;
    else
        ageinDays += month[current_mm - 1] + current_dd;
    cout << "Age in Days: " << ageinDays << endl;
    return (0);
}