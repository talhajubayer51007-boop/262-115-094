#include <stdio.h>

int main() {
    int N;
    long long factorial = 1;

    printf("Enter N: ");
    scanf("%d", &N);

    if (N < 0) {
        printf("Factorial of negative numbers does not exist.\n");
    } else {
        for (int i = 1; i <= N; i++) {
            factorial *= i;
        }
        printf("Factorial of %d = %lld\n", N, factorial);
    }

    return 0;
}
