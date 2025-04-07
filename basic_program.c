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

// Prime checking function
int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Function to find nth prime number
int nth_prime(int n) {
    int count = 0, num = 1;
    while (count < n) {
        num++;
        if (is_prime(num)) {
            count++;
        }
    }
    return num;
}

int main() {
    printf("Hello, World!\n");

    int num = 5
    printf("Factorial of %d is %d\n", num, factorial(num));

    
    int fib_num = 5
    printf("The %dth Fibonacci number is %d\n", fib_num, fibonacci(fib_num));

    
    int prime_num = 5
    printf("The %dth prime number is %d\n", prime_num, nth_prime(prime_num));

    return 0;
}
