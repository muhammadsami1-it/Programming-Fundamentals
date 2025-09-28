 #include <stdio.h>

int main() {
    int day;
    char time;

    printf("Enter days of the week respectively:\n");
    printf("1 for Monday\n2 for Tuesday\n3 for Wednesday\n4 for Thursday\n5 for Friday\n6 for Saturday\n7 for Sunday\n");
    scanf("%d", &day);
    getchar(); // Clear the newline left in buffer

    switch(day) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("Enter M for Morning or E for Evening:\n");
            scanf("%c", &time);
            switch(time) {
                case 'M':
                case 'm':
                    printf("Go to Class\n");
                    break;
                case 'E':
                case 'e':
                    printf("Do Homework\n");
                    break;
                default:
                    printf("Invalid time input\n");
            }
            break;

        case 6:
        case 7:
            printf("Enter M for Morning or E for Evening:\n");
            scanf("%c", &time);
            switch(time) {
                case 'M':
                case 'm':
						 printf("Play Sports\n");
                    break;
                case 'E':
                case 'e':
                    printf("Watch Movies\n");
                    break;
                default:
                    printf("Invalid time input\n");
            }
            break;

        default:
            printf("Invalid day input\n");
    }

    return 0;
}
