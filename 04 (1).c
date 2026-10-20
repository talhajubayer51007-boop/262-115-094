#include <stdio.h>

int main() {
    int N, sum = 0;
    printf("Enter N: ");
    scanf("%d", &N);

    for (int i = 2; i <= N; i += 2) {
        sum += i;
    }

    printf("Sum of even numbers = %d\n", sum);

    return 0;
}
