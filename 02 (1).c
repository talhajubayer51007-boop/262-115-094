#include <stdio.h>

int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    for (int i = N; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
