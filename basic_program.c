#include <stdio.h>

// Factorial function
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    printf("Hello, World!\n");

    // Test the factorial function
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));

    return 0;
}
