#include <stdio.h>
int main() {
    int arr[5], n, found = 0;
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("Enter element to search: ");
    scanf("%d", &n);
    for (int i = 0; i < 5; i++)
        if (arr[i] == n) {
            found = 1;
            break;
        }
    if (found)
        printf("Element found");
    else
        printf("Not found");
    return 0;
}
