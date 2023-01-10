#include <stdio.h>

int main() {
    int day, month, year;
    int max_day; // variable to store maximum number of days in a month

    // Input current date
    printf("Enter current date (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    // Check if year is a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        if (month == 2) {
            max_day = 29;
        }
    } else {
        if (month == 2) {
            max_day = 28;
        }
    }

    // Check for other months
    if (month == 4 || month == 6 || month == 9 || month == 11) {
        max_day = 30;
    } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        max_day = 31;
    }
    
    // Check if current day is the last day of the month
    if (day == max_day) {
        if (month == 12) {
            month = 1;
            year++;
        } else {
            month++;
        }
        day = 1;
    } else {
        day++;
    }
    printf("Next date: %d/%d/%d\n", day, month, year);
    return 0;
}
