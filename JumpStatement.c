#include <stdio.h>

int main()
{
    int num = 12;
    // switch statment
    switch (num)
    {
    case 1:
        printf("One\n");
        break;
    case 2:
        printf("Two\n");
        break; // Exits switch after executing case 2
    case 3:
        printf("Three\n");
        break;
    default:
        printf("Invalid\n");
    }

    // break and continue
    for (int i = 0; i < 10; i++)
    {

        if (i == 5)
        {
            break;
        }
        else if (i == 3)
        {
            continue;
        }
        printf("Hello World %d\n", i);
    }

    // goto statment example ;

    printf("starting of the code \n");

    goto aman;

    printf("I am skiping this line of code ....");

aman:
    printf("using goto statemnt i directly move to the aman");


    return 0;
}
