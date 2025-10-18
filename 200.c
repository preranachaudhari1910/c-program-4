#include <stdio.h>
int main() {
    int arr[5], freq[100] = {0};
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
        freq[arr[i]]++;
    }
    printf("Frequency:\n");
    for (int i = 0; i < 5; i++)
        printf("%d occurs %d times\n", arr[i], freq[arr[i]]);
    return 0;
}
