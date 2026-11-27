// WAP to find the age of a person in years, months, and days. The date of birth must be supplied as input.
#include <stdio.h>
int daysInMonth(int month, int year);
int main()
{
    int d1, m1, y1;
    int d2, m2, y2;
    int days, months, years;
    printf("Enter your Date of Birth (dd mm yyyy): ");
    scanf("%d %d %d", &d1, &m1, &y1);
    printf("Enter Current Date (dd mm yyyy): ");
    scanf("%d %d %d", &d2, &m2, &y2);
    days = d2 - d1;
    months = m2 - m1;
    years = y2 - y1;
    if(days < 0)
    {
        int prevMonth = (m2 == 1) ? 12 : m2 - 1;
        int prevMonthYear = (m2 == 1) ? y2 - 1 : y2;
        days = days + daysInMonth(prevMonth, prevMonthYear);
        months--;
    }
    if(months < 0)
    {
        months = months + 12;
        years--;
    }
    printf("\nAge = %d years, %d months, %d days\n", years, months, days);
    return 0;
}
int daysInMonth(int month, int year)
{
    int days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(month == 2)
    {
        if((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
            return 29;
        else
            return 28;
    }
    return days[month - 1];
}
