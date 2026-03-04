#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define CAPTCHA_LENGTH 6

void generateCaptcha(char captcha[])
{
    char characters[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

    int n = sizeof(characters) - 1;

    for(int i = 0; i < CAPTCHA_LENGTH; i++)
    {
        int index = rand() % n;
        captcha[i] = characters[index];
    }

    captcha[CAPTCHA_LENGTH] = '\0';
}

int main()
{
    char captcha[CAPTCHA_LENGTH + 1];
    char userInput[CAPTCHA_LENGTH + 1];

    srand(time(NULL));

    generateCaptcha(captcha);

    printf("CAPTCHA: %s\n", captcha);

    printf("Enter CAPTCHA: ");
    scanf("%s", userInput);

    if(strcmp(captcha, userInput) == 0)
    {
        printf("Verification Successful: Human detected\n");
    }
    else
    {
        printf("Verification Failed: Bot suspected\n");
    }

    return 0;
}
