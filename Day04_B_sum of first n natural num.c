//Q8.Write a program to swap two numbers without using a third variable.
#include <stdio.h>
int main() {
    int n;
    int sum = 0;

    // Input from the user
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    // Calculate the sum using a loop
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Display the result
    printf("Sum of the first %d natural numbers = %d\n", n, sum);

    return 0;
}

