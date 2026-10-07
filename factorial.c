#include <stdio.h>
#include <limits.h>

int factorial(int n, unsigned long long *result) {
    if (n < 0) {
        return -1;
    }

    *result = 1;

    for (int i = 1; i <= n; i++) {
        if (*result > ULLONG_MAX / i) {
            return -2;
        }

        *result *= i;
    }

    return 0;
}

int main(void) {
    int n;
    unsigned long long result;

    printf("Enter a non-negative integer: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    int status = factorial(n, &result);

    if (status == -1) {
        printf("Error: Negative input is not allowed.\n");
        return 1;
    }

    if (status == -2) {
        printf("Error: Integer overflow.\n");
        return 1;
    }

    printf("%d! = %llu\n", n, result);

    return 0;
}
#include <stdio.h>
#include <limits.h>

int factorial(int n, unsigned long long *result) {
    if (n < 0) {
        return -1;
    }

    *result = 1;

    for (int i = 1; i <= n; i++) {
        if (*result > ULLONG_MAX / i) {
            return -2;
        }

        *result *= i;
    }

    return 0;
}

int main(void) {
    int n;
    unsigned long long result;

    printf("Enter a non-negative integer: ");

    if (scanf("%d", &n) != 1) {
        printf("Error: Invalid input.\n");
        return 1;
    }

    int status = factorial(n, &result);

    if (status == -1) {
        printf("Error: Negative input is not allowed.\n");
        return 1;
    }

    if (status == -2) {
        printf("Error: Integer overflow.\n");
        return 1;
    }

    printf("%d! = %llu\n", n, result);

    return 0;
}
