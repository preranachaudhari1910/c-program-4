#include <stdio.h>
int main() {
    int a[5], x, count = 0;
    for (int i = 0; i < 5; i++)
        scanf("%d", &a[i]);
    printf("Enter number to count: ");
    scanf("%d", &x);
    for (int i = 0; i < 5; i++)
        if (a[i] == x)
            count++;
    printf("Count = %d", count);
    return 0;
}
