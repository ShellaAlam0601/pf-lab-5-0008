#include <stdio.h>

int main()
{
    int age, creditScore;
    float income;
    char existingLoan;

    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter monthly income: ");
    scanf("%f", &income);

    printf("Enter credit score: ");
    scanf("%d", &creditScore);

    printf("Do you have an existing loan? (Y/N): ");
    scanf(" %c", &existingLoan);

    if (age >= 21 && income >= 100000 && creditScore >= 750 && existingLoan == 'N')
    {
        printf("High Approval Chance");
    }
    else if (age >= 21 && income >= 75000 && creditScore >= 650 && existingLoan == 'Y')
    {
        printf("Manual Review");
    }
    else if (age >= 21 && income >= 50000 && creditScore >= 600)
    {
        printf("Possibly Eligible");
    }
    else
    {
        printf("Rejected");
    }

    return 0;
}