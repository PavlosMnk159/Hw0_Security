#include <stdio.h>
#include <math.h>

// Function to calculate the sum of squares up to n
int sum_of_squares(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}

// Function to calculate the factorial of a number
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to calculate the nth triangular number
int triangular_number(int n) {
    return (n * (n + 1)) / 2;
}

int main() {
    int num;
    printf("Enter a positive integer: ");
    if (scanf("%d", &num) != 1 || num <= 0) {
        printf("Invalid input. Please enter a positive integer.\n");
        return 1;
    }
    
    printf("Sum of squares up to %d: %d\n", num, sum_of_squares(num));
    printf("Factorial of %d: %lld\n", num, factorial(num));
    printf("%dth triangular number: %d\n", num, triangular_number(num));
    
    return 0;
}