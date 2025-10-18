#include <stdio.h>

int sumN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Sum = %d", sumN(n));
    return 0;
}
