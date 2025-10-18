#include <stdio.h>

float ctof(float c) {
    return (c * 9 / 5) + 32;
}

int main() {
    float c;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &c);
    printf("Fahrenheit = %.2f", ctof(c));
    return 0;
}
