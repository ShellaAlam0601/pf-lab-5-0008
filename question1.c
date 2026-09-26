#include <stdio.h>

int main()
{
    int programming, mathematics, ai;
    float attendance, average;

    printf("Enter Programming marks: ");
    scanf("%d", &programming);

    printf("Enter Mathematics marks: ");
    scanf("%d", &mathematics);

    printf("Enter AI marks: ");
    scanf("%d", &ai);

    printf("Enter Attendance percentage: ");
    scanf("%f", &attendance);

    // Check eligibility
    if (programming >= 50 && mathematics >= 50 && ai >= 50 && attendance >= 75)
    {
        printf("Student is Eligible\n");

        // Calculate average
        average = (programming + mathematics + ai) / 3.0;

        printf("Average = %.2f\n", average);

        // Classify performance
        if (average >= 80)
        {
            printf("Performance: Excellent\n");
        }
        else if (average >= 70)
        {
            printf("Performance: Very Good\n");
        }
        else if (average >= 60)
        {
            printf("Performance: Good\n");
        }
        else if (average >= 50)
        {
            printf("Performance: Satisfactory\n");
        }
        else
        {
            printf("Performance: Poor\n");
        }
    }
    else
    {
        printf("Student is Not Eligible\n");
    }

    return 0;
}