#include <stdio.h>

// Factorial function
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

// Fibonacci function
int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("Hello, World!\n");

    // Test the factorial function
    int num = 5;
    printf("Factorial of %d is %d\n", num, factorial(num));

    // Test the Fibonacci function
    int fib_num = 5;
    printf("Fibonacci of %d is %d\n", fib_num, fibonacci(fib_num));

    return 0;
}
