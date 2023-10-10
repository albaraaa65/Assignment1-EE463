#include <stdio.h>

int main() {
    int hours;
    int seconds;

   
    printf("Enter the number of hours: ");
    scanf("%d", &hours);

    
    seconds = hours * 3600;

   
    printf("%d hours is equal to %d seconds.\n", hours, seconds);

    return 0;
}

