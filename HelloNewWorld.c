#include <stdio.h>

int main()
{

    char username[60];
    printf("Input your user: ");
    scanf("%s", username);
    printf("\n\nHello %s!", username);
    printf("\nHello World!");

    int x = 5;
    printf("Countdown to Pasko...\n");
    for (; x > 0; x--)
    {
        printf("%d\n", x);
    }
    if (x = 0)
    {
        printf("\nPasko na! Yehey!!!");
    }
}