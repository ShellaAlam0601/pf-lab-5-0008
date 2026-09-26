#include <stdio.h>
#include <math.h>

int main()
{
    float accuracy, confidence, modelScore;
    int datasetSize;
    int role, status, permission;

    printf("===== AI DECISION ENGINE =====\n");

    printf("Enter model accuracy: ");
    scanf("%f", &accuracy);

    printf("Enter confidence score: ");
    scanf("%f", &confidence);

    printf("Enter dataset size: ");
    scanf("%d", &datasetSize);

    printf("\nSelect User Role:\n");
    printf("1. Admin\n");
    printf("2. Developer\n");
    printf("3. Researcher\n");
    printf("Enter role: ");
    scanf("%d", &role);

    printf("\nSelect Model Status:\n");
    printf("1. Ready\n");
    printf("2. Testing\n");
    printf("3. Training\n");
    printf("Enter status: ");
    scanf("%d", &status);

    printf("\nEnter permission value: ");
    scanf("%d", &permission);


    /* Nested switch for Role */
    switch(role)
    {
        case 1:
            printf("\nUser Role: Admin\n");
            break;

        case 2:
            printf("\nUser Role: Developer\n");
            break;

        case 3:
            printf("\nUser Role: Researcher\n");
            break;

        default:
            printf("\nInvalid User Role\n");
    }


    /* Nested switch for Model Status */
    switch(status)
    {
        case 1:
            printf("Model Status: Ready\n");
            break;

        case 2:
            printf("Model Status: Testing\n");
            break;

        case 3:
            printf("Model Status: Training\n");
            break;

        default:
            printf("Invalid Model Status\n");
    }


    /* Calculate Model Score */
    modelScore = (accuracy + confidence) / 2;

    printf("\nModel Score = %.2f\n", modelScore);


    /* Check Deployment Permission using bitwise AND */
    if (permission & 8)
    {
        printf("Deployment Permission: Allowed\n");
    }
    else
    {
        printf("Deployment Permission: Not Allowed\n");
    }


    /* Deployment Decision */
    if (accuracy >= 80 &&
        confidence >= 75 &&
        datasetSize >= 1000 &&
        status == 1 &&
        (permission & 8))
    {
        printf("Deployment Status: READY FOR DEPLOYMENT\n");
    }
    else
    {
        printf("Deployment Status: NOT READY FOR DEPLOYMENT\n");
    }


    /* Ternary Operator */
    printf("Dataset Size: %s\n",
           (datasetSize >= 1000) ? "Sufficient" : "Not Sufficient");


    /* sizeof() */
    printf("Size of accuracy variable = %lu bytes\n", sizeof(accuracy));


    /* math.h function */
    printf("Rounded Model Score = %.0f\n", round(modelScore));

    return 0;
}