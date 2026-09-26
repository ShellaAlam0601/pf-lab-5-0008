#include <stdio.h>

int main()
{
    int category, choice;

    printf("===== AI CHATBOT =====\n");
    printf("1. Greeting\n");
    printf("2. Study\n");
    printf("3. Weather\n");
    printf("4. Help\n");

    printf("Enter your category: ");
    scanf("%d", &category);

    switch(category)
    {
        case 1:
            printf("\n1. Hello\n");
            printf("2. How are you\n");
            printf("3. Goodbye\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    printf("Chatbot: Hello! Nice to meet you.");
                    break;
                case 2:
                    printf("Chatbot: I am fine. How are you?");
                    break;
                case 3:
                    printf("Chatbot: Goodbye! Have a nice day.");
                    break;
                default:
                    printf("Invalid choice.");
            }
            break;

        case 2:
            printf("\n1. Programming\n");
            printf("2. Mathematics\n");
            printf("3. AI\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    printf("Chatbot: Programming helps you write computer programs.");
                    break;
                case 2:
                    printf("Chatbot: Mathematics helps in solving problems.");
                    break;
                case 3:
                    printf("Chatbot: AI allows computers to perform intelligent tasks.");
                    break;
                default:
                    printf("Invalid choice.");
            }
            break;

        case 3:
            printf("\n1. Today\n");
            printf("2. Tomorrow\n");
            printf("3. Forecast\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    printf("Chatbot: Today's weather information is selected.");
                    break;
                case 2:
                    printf("Chatbot: Tomorrow's weather information is selected.");
                    break;
                case 3:
                    printf("Chatbot: Weather forecast is selected.");
                    break;
                default:
                    printf("Invalid choice.");
            }
            break;

        case 4:
            printf("\n1. About Chatbot\n");
            printf("2. Commands\n");
            printf("3. Exit\n");

            printf("Enter your choice: ");
            scanf("%d", &choice);

            switch(choice)
            {
                case 1:
                    printf("Chatbot: I am a simple rule-based AI chatbot.");
                    break;
                case 2:
                    printf("Chatbot: Select a category and then select an option.");
                    break;
                case 3:
                    printf("Chatbot: Exiting... Goodbye!");
                    break;
                default:
                    printf("Invalid choice.");
            }
            break;

        default:
            printf("Invalid category.");
    }

    return 0;
}