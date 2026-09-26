#include <stdio.h>

int main()
{
    float confidence, threshold;

    printf("Enter model confidence: ");
    scanf("%f", &confidence);

    printf("Enter required confidence threshold: ");
    scanf("%f", &threshold);

    // Confidence classification
    if (confidence >= 90)
    {
        printf("Confidence: Very High\n");
    }
    else if (confidence >= 75)
    {
        printf("Confidence: High\n");
    }
    else if (confidence >= 50)
    {
        printf("Confidence: Moderate\n");
    }
    else
    {
        printf("Confidence: Low\n");
    }

    // Acceptance decision
    if (confidence >= threshold && confidence >= 50)
    {
        printf("Prediction: Accepted\n");
    }
    else
    {
        printf("Prediction: Not Accepted\n");
    }

    return 0;
}