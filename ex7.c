#include <stdio.h>

int main() {
    int a, b, c;
    int max, min;
    float avg;
    int i, val;

    printf("Enter three numbers (A B C): ");
    scanf("%d %d %d", &a, &b, &c);

    max = a; 
    min = a;
    
    for(i = 0; i < 3; i++) {
        
        switch(i) {
            case 0: val = a; break;
            case 1: val = b; break;
            case 2: val = c; break;
        }
        
      
        if(val > max) {
            max = val;
        }
        
       
        if(val < min) {
            min = val;
        }
    }

   
    avg = (float)(a + b + c) / 3;

   
    printf("Maximum: %d\n", max);
    printf("Minimum: %d\n", min);
    printf("Average: %.2f\n", avg);

    return 0;
}

