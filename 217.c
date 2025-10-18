#include <stdio.h>
int main() {
    int a[5], sum = 0;
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 5; i++)
        if (a[i] > 0)
            sum += a[i];
    printf("Sum of positive = %d", sum);
    return 0;
}
