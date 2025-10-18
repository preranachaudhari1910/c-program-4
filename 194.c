#include <stdio.h>
int main() {
    int arr[5], count = 0;
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    for (int i = 0; i < 5; i++)
        if (arr[i] % 2 == 0)
            count++;
    printf("Even numbers = %d", count);
    return 0;
}
