#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial not possible.\n");
    } else {
        printf("Factorial = %d\n", fact(n));
    }

    return 0;
}
