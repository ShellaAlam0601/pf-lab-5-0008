#include <stdio.h>

int main()
{
    int type, algorithm;

    printf("===== Machine Learning Model Selection =====\n");
    printf("1. Classification\n");
    printf("2. Regression\n");
    printf("3. Clustering\n");
    printf("4. Computer Vision\n");

    printf("Enter problem type: ");
    scanf("%d", &type);

    switch(type)
    {
        case 1:
            printf("\nClassification Algorithms:\n");
            printf("1. Logistic Regression\n");
            printf("2. Decision Tree\n");
            printf("3. KNN\n");

            printf("Enter your choice: ");
            scanf("%d", &algorithm);

            switch(algorithm)
            {
                case 1:
                    printf("You selected Logistic Regression");
                    break;
                case 2:
                    printf("You selected Decision Tree");
                    break;
                case 3:
                    printf("You selected KNN");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 2:
            printf("\nRegression Algorithms:\n");
            printf("1. Linear Regression\n");
            printf("2. Polynomial Regression\n");
            printf("3. SVR\n");

            printf("Enter your choice: ");
            scanf("%d", &algorithm);

            switch(algorithm)
            {
                case 1:
                    printf("You selected Linear Regression");
                    break;
                case 2:
                    printf("You selected Polynomial Regression");
                    break;
                case 3:
                    printf("You selected SVR");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 3:
            printf("\nClustering Algorithms:\n");
            printf("1. K-Means\n");
            printf("2. Hierarchical Clustering\n");
            printf("3. DBSCAN\n");

            printf("Enter your choice: ");
            scanf("%d", &algorithm);

            switch(algorithm)
            {
                case 1:
                    printf("You selected K-Means");
                    break;
                case 2:
                    printf("You selected Hierarchical Clustering");
                    break;
                case 3:
                    printf("You selected DBSCAN");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 4:
            printf("\nComputer Vision Algorithms:\n");
            printf("1. CNN\n");
            printf("2. YOLO\n");
            printf("3. R-CNN\n");

            printf("Enter your choice: ");
            scanf("%d", &algorithm);

            switch(algorithm)
            {
                case 1:
                    printf("You selected CNN");
                    break;
                case 2:
                    printf("You selected YOLO");
                    break;
                case 3:
                    printf("You selected R-CNN");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        default:
            printf("Invalid problem type");
    }

    return 0;
}