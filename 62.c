//Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. 
//Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int maxSoFar = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        // Extend current subarray or start new one
        currentSum = (currentSum + arr[i] > arr[i]) ? currentSum + arr[i] : arr[i];

        // Track global maximum
        if (currentSum > maxSoFar)
            maxSoFar = currentSum;
    }

    printf("%d\n", maxSoFar);

    return 0;
}

