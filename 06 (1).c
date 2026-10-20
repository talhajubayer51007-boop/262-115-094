#include <stdio.h>

int main() {
    long long num;
    int count = 0;

    printf("Enter a number: ");
    scanf("%lld", &num);

    if (num == 0) {
        count = 1;
    } else {
        if (num < 0) num = -num; // Handle negative numbers
        while (num > 0) {
            num /= 10;
            count++;
        }
    }

    printf("Total digits = %d\n", count);

    return 0;
}
