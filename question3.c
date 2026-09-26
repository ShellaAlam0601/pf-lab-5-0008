#include <stdio.h>

int main()
{
    int category, subcategory;

    printf("Select a Category:\n");
    printf("1. Animal\n");
    printf("2. Vehicle\n");
    printf("3. Food\n");
    printf("4. Human\n");

    printf("Enter your choice: ");
    scanf("%d", &category);

    switch(category)
    {
        case 1:
            printf("\nAnimal:\n");
            printf("1. Cat\n");
            printf("2. Dog\n");
            printf("3. Bird\n");
            printf("Enter your choice: ");
            scanf("%d", &subcategory);

            switch(subcategory)
            {
                case 1:
                    printf("You selected Cat");
                    break;
                case 2:
                    printf("You selected Dog");
                    break;
                case 3:
                    printf("You selected Bird");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 2:
            printf("\nVehicle:\n");
            printf("1. Car\n");
            printf("2. Bus\n");
            printf("3. Bike\n");
            printf("Enter your choice: ");
            scanf("%d", &subcategory);

            switch(subcategory)
            {
                case 1:
                    printf("You selected Car");
                    break;
                case 2:
                    printf("You selected Bus");
                    break;
                case 3:
                    printf("You selected Bike");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 3:
            printf("\nFood:\n");
            printf("1. Pizza\n");
            printf("2. Burger\n");
            printf("3. Biryani\n");
            printf("Enter your choice: ");
            scanf("%d", &subcategory);

            switch(subcategory)
            {
                case 1:
                    printf("You selected Pizza");
                    break;
                case 2:
                    printf("You selected Burger");
                    break;
                case 3:
                    printf("You selected Biryani");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        case 4:
            printf("\nHuman:\n");
            printf("1. Male\n");
            printf("2. Female\n");
            printf("3. Child\n");
            printf("Enter your choice: ");
            scanf("%d", &subcategory);

            switch(subcategory)
            {
                case 1:
                    printf("You selected Male");
                    break;
                case 2:
                    printf("You selected Female");
                    break;
                case 3:
                    printf("You selected Child");
                    break;
                default:
                    printf("Invalid choice");
            }
            break;

        default:
            printf("Invalid category");
    }

    return 0;
}