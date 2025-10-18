#include <stdio.h>

int sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

int main() {
    int arr[5];
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
    printf("Sum = %d", sumArray(arr, 5));
    return 0;
}
