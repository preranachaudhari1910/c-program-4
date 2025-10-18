#include <stdio.h>

int power(int a, int b) {
    int result = 1;
    for (int i = 1; i <= b; i++)
        result *= a;
    return result;
}

int main() {
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d%d", &a, &b);
    printf("Result = %d", power(a, b));
    return 0;
}
