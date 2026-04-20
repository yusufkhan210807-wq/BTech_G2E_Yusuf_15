#include <stdio.h>
int main()
{
    int month, year, maxDay;

    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        maxDay = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        maxDay = 30;
        break;
    case 2:
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            maxDay = 29;
        }
        else
        {
            maxDay = 28;
        }
        break;
    default:
        printf("Invalid month entered.\n");
    }

    printf("The maximum number of days in month %d of year %d is: %d\n", month, year, maxDay);
    return 0;
}
