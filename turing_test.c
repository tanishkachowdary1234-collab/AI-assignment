#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];

    printf("Turing Test Chatbot\n");
    printf("Type 'bye' to exit\n");

    while(1)
    {
        printf("You: ");
        fgets(input,100,stdin);

        if(strstr(input,"hello"))
            printf("Bot: Hello! How are you?\n");

        else if(strstr(input,"how are you"))
            printf("Bot: I am doing great!\n");

        else if(strstr(input,"name"))
            printf("Bot: I am an AI chatbot.\n");

        else if(strstr(input,"bye"))
        {
            printf("Bot: Goodbye!\n");
            break;
        }

        else
            printf("Bot: Interesting! Tell me more.\n");
    }

    return 0;
}
