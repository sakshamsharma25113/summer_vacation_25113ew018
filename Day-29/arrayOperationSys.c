#include <stdio.h>

int main() {
    int arr[100], n, i, choice, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    do {
        printf("\n--- Array Operations ---\n");
        printf("1. Display Array\n");
        printf("2. Find Maximum\n");
        printf("3. Find Minimum\n");
        printf("4. Linear Search\n");
        printf("5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                for(i = 0; i < n; i++)
                    printf("%d ", arr[i]);
                printf("\n");
                break;

            case 2: {
                int max = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] > max)
                        max = arr[i];
                printf("Maximum = %d\n", max);
                break;
            }

            case 3: {
                int min = arr[0];
                for(i = 1; i < n; i++)
                    if(arr[i] < min)
                        min = arr[i];
                printf("Minimum = %d\n", min);
                break;
            }

            case 4: {
                int found = 0;
                printf("Enter element to search: ");
                scanf("%d", &key);

                for(i = 0; i < n; i++) {
                    if(arr[i] == key) {
                        printf("Element found at position %d\n", i + 1);
                        found = 1;
                        break;
                    }
                }

                if(!found)
                    printf("Element not found.\n");
                break;
            }

            case 5:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}