//Q10.Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() {
    int totalSeconds;
    int hours, minutes, seconds;

    // Input from the user
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    if (totalSeconds < 0) {
        printf("Please enter a non-negative number of seconds.\n");
        return 1;
    }

    // Calculate hours, minutes, seconds
    hours = totalSeconds / 3600;
    minutes = (totalSeconds % 3600) / 60;
    seconds = totalSeconds % 60;

    // Display the result
    printf("%d seconds = %02d:%02d:%02d (hh:mm:ss)\n",
           totalSeconds, hours, minutes, seconds);

    return 0;
}

