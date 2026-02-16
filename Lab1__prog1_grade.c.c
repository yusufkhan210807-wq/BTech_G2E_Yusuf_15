#include <stdio.h>

int main()
{
    float percentage;

    printf("Enter the student's percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90)
    {
        printf("Grade: A\n");
    }
    else if (percentage >= 80)
    {
        printf("Grade: B\n");
    }
    else if (percentage >= 60)
    {
        printf("Grade: C\n");
    }
    else if (percentage >= 0)
    {
        printf("Grade: D\n");
    }
    

    return 0;
}