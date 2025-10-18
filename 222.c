#include <stdio.h>
int main() {
    int a[5], temp;
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    temp = a[0];
    a[0] = a[4];
    a[4] = temp;
    printf("After swap: ");
    for (int i = 0; i < 5; i++)
        printf("%d ", a[i]);
    return 0;
}
