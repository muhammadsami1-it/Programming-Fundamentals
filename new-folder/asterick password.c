#include <stdio.h>
#include <conio.h>
int main()
{
    char password[21];
    printf("Enter password max 20 chars: ");
    int index = 0;
    char current;
    do
    {
        current = getch();
        if (current == 0 || current == -32)
        {
            getch();
            continue;
        }
        if (current == '\b')
        {
            if (index > 0)
            {
                index--;
                printf("\b \b");
                password[index] = '\0';
            }
        }
        else
        {
            if (current == '\r' || current == '\n')
                password[index] = '\0';
            else if (current >= '!' && current <= '~')
            {
                password[index] = current;
                printf("*");
                index++;
            }
        }
    } while (current != '\r' && current != '\n');
    printf("\nThe password entered was: %s", password);
    return 0;
}