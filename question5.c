#include <stdio.h>

int main()
{
    int confidence;
    char userType;

    printf("Enter face recognition confidence: ");
    scanf("%d", &confidence);

    printf("Enter user type (A for Authorized, U for Unauthorized): ");
    scanf(" %c", &userType);

    if (confidence >= 80)
    {
        printf("Face Recognized\n");

        if (userType == 'A')
        {
            printf("Access Granted\n");
        }
        else
        {
            printf("Access Denied\n");
        }
    }
    else if (confidence >= 50)
    {
        printf("Manual Verification Required\n");
    }
    else
    {
        printf("Access Denied\n");
    }

    // Ternary operator
    printf("User Status: %s\n",
           (userType == 'A') ? "Authorized" : "Unauthorized");

    return 0;
}