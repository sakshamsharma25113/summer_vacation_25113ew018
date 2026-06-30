#include <stdio.h>

int main() {
    int arr[100], n, key;
    int low = 0, high, mid, found = 0, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the sorted elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);

    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;

        if(arr[mid] == key) {
            found = 1;
            break;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found)
        printf("Element found at position %d\n", mid + 1);
    else
        printf("Element not found\n");

    return 0;
}