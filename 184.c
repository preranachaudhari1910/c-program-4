#include <stdio.h>

void checkNum(int n) {
    if (n > 0)
        printf("Positive");
    else if (n < 0)
        printf("Negative");
    else
        printf("Zero");
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    checkNum(n);
    return 0;
}
