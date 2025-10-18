#include <stdio.h>

int countDigits(int n) {
    int count = 0;
    while (n) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Digits = %d", countDigits(n));
    return 0;
}
