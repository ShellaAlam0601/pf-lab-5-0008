#include <stdio.h>

int main()
{
    int permission;

    printf("Enter permission value: ");
    scanf("%d", &permission);

    // Check View permission
    if (permission & 1)
    {
        printf("View: Allowed\n");
    }

    // Check Train permission
    if (permission & 2)
    {
        printf("Train: Allowed\n");
    }

    // Check Test permission
    if (permission & 4)
    {
        printf("Test: Allowed\n");
    }

    // Check Deploy permission
    if (permission & 8)
    {
        printf("Deploy: Allowed\n");
    }

    // Check Training + Deployment
    if ((permission & 2) && (permission & 8))
    {
        printf("User has both Training and Deployment permissions.\n");
    }
    else
    {
        printf("User does not have both Training and Deployment permissions.\n");
    }

    return 0;
}