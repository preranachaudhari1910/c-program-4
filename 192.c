#include <stdio.h>
int main() {
    int arr[5], max;
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    max = arr[0];
    for (int i = 1; i < 5; i++)
        if (arr[i] > max)
            max = arr[i];
    printf("Maximum = %d", max);
    return 0;
}
