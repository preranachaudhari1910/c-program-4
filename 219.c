#include <stdio.h>
int main() {
    int a[5], count = 0;
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    for (int i = 0; i < 5; i++)
        if (a[i] < 0)
            count++;
    printf("Negative numbers = %d", count);
    return 0;
}
