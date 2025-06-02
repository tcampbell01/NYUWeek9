#include <iostream>
using namespace std;

int printMonthCalendar(int numOfDays, int startingDay);
bool leapYear(int year);
void printYearCalendar(int year, int startingDay);

int main() {
    int daysInMonth = 0;
    int dayOnePosition = 1;
    int year = 0;
    


    // Get input from the user
    cout << "Please enter the number of days in the month: " << endl;
    cin >> daysInMonth;

    cout << "Please enter a number 1-7 that represents the day in the week for the first day in that month (example: 1 for Monday, 2 for Tuesday, 3 for Wednesday, etc): " << endl;
    cin >> dayOnePosition;

    cout << "Please enter the year: " << endl;
    cin >> year;

    // Pass input to the functions
    int lastDay = printMonthCalendar(daysInMonth, dayOnePosition);

    // Check if the year is a leap year
    if (leapYear(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    printYearCalendar(year, dayOnePosition);

    return 0;
}

int printMonthCalendar(int numOfDays, int startingDay) {
    int numEmpty = startingDay - 1;

    // Print the header for the calendar
    cout << "Mon\tTue\tWed\tThu\tFri\tSat\tSun" << endl;

    // Print beginning spaces for the first week
    for (int i = 0; i < numEmpty; i++) {
        cout << "\t";
    }

    // Print the days of the month
    for (int i = 1; i <= numOfDays; i++) {
        cout << i << "\t";

        // Move to the next line after Sunday
        if ((i + numEmpty) % 7 == 0) {
            cout << endl;
        }
    }
    cout << endl;

    // Calculate the last day of the month
    int lastDay = (startingDay + numOfDays - 1) % 7;
    if (lastDay == 0) {
        lastDay = 7; // Ensure Sunday is represented as 7
    }

    // Return the starting day of the next month (last day + 1)
    int nextStartingDay = lastDay + 1;
    if (nextStartingDay > 7) {
        nextStartingDay = 1; // Wrap around to Monday if it exceeds 7
    }
    return nextStartingDay;
}


bool leapYear(int year) {
    // Check if the year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    }
    return false;
}

void printYearCalendar(int year, int startingDay) {
    int daysInMonth;
    string monthName;

    // Loop through all 12 months
    for (int month = 1; month <= 12; month++) {
        // Determine the name of the month and the number of days
        if (month == 1) {
            monthName = "January";
            daysInMonth = 31;
        } else if (month == 2) {
            monthName = "February";
            if (leapYear(year)) {
                daysInMonth = 29; // Leap year
            } else {
                daysInMonth = 28; // Non-leap year
            }
        } else if (month == 3) {
            monthName = "March";
            daysInMonth = 31;
        } else if (month == 4) {
            monthName = "April";
            daysInMonth = 30;
        } else if (month == 5) {
            monthName = "May";
            daysInMonth = 31;
        } else if (month == 6) {
            monthName = "June";
            daysInMonth = 30;
        } else if (month == 7) {
            monthName = "July";
            daysInMonth = 31;
        } else if (month == 8) {
            monthName = "August";
            daysInMonth = 31;
        } else if (month == 9) {
            monthName = "September";
            daysInMonth = 30;
        } else if (month == 10) {
            monthName = "October";
            daysInMonth = 31;
        } else if (month == 11) {
            monthName = "November";
            daysInMonth = 30;
        } else {
            monthName = "December";
            daysInMonth = 31;
        }

        // Print the month name and year
        cout << monthName << " " << year << endl;

        // Call printMonthCalendar to print the month's calendar
        startingDay = printMonthCalendar(daysInMonth, startingDay);

        // Add a blank line between months
        cout << endl;
    }
}