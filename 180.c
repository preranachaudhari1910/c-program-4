#include <stdio.h>

int cube(int n) {
    return n * n * n;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Cube = %d", cube(n));
    return 0;
}
