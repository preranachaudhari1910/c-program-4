#include <stdio.h>

float calc(float a, float b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return b != 0 ? a / b : 0;
        default: return 0;
    }
}

int main() {
    float a, b;
    char op;
    printf("Enter expression (a + b): ");
    scanf("%f %c %f", &a, &op, &b);
    printf("Result = %.2f", calc(a, b, op));
    return 0;
}
