//Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. 
//Print that missing number

#include <stdio.h>
int main() {
    int n, i;
    
    // Input size n
    printf("Enter n: ");
    scanf("%d", &n);

    int arr[n];
    int sum = 0;

    // Read array elements
    printf("Enter %d elements (numbers between 0 to %d):\n", n, n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    // Calculate expected sum of numbers from 0 to n
    int expected_sum = n * (n + 1) / 2;

    // Missing number = expected sum - actual sum
    int missing = expected_sum - sum;

    printf("The missing number is: %d\n", missing);

    return 0;
}
