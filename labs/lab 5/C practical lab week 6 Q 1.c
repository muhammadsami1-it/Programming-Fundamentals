#include <stdio.h>

int main (void) {
    int daynum;
    printf("Enter a number of the day in a week\n");
    printf("1 Monday\n");
    printf("2 Tuesday\n");
    printf("3 Wednesday\n");
    printf("4 Thursday\n");
    printf("5 Friday\n");
    printf("6 Saturday\n");
    printf("7 Sunday\n");
    scanf("%d", &daynum);

    switch(daynum) {
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
    }

    return 0;
}


