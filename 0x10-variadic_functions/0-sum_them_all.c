#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...) {
    if (n == 0) {
        return 0;
    }

    int sum = 0;

    va_list args;
    va_start(args, n);

    for (unsigned int i = 0; i < n; i++) {
        sum += va_arg(args, int);
    }

    va_end(args);

    return sum;
}

int main() {
    int result1 = sum_them_all(3, 10, 20, 30);
    int result2 = sum_them_all(0);

    printf("Result 1: %d\n", result1);  // Should print 60
    printf("Result 2: %d\n", result2);  // Should print 0

    return 0;
}
