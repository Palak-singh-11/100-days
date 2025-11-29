//Write a program to take an integer array as input. Only one element will be repeated. //
//Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    int freq[n+1];   // frequency array
    
    // Initialize frequency array to 0
    for(int i = 0; i <= n; i++)
        freq[i] = 0;

    printf("Enter %d elements:\n", n);

    int repeated = -1;

    // ONE iteration loop
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        freq[arr[i]]++;  // increase count
        
        if(freq[arr[i]] == 2) {  
            repeated = arr[i];   // detected repeated number
        }
    }

    printf("Repeated element is: %d\n", repeated);

    return 0;
}
