#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int choice;

    printf("Enter a string: ");
    scanf("%s", str);

    do {
        printf("\n--- String Operations ---\n");
        printf("1. Length\n");
        printf("2. Reverse\n");
        printf("3. Uppercase\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Length = %lu\n", strlen(str));
                break;

            case 2:
                strrev(str);
                printf("Reversed = %s\n", str);
                break;

            case 3:
                printf("Uppercase = %s\n", strupr(str));
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}