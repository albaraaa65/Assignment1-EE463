#include <stdio.h>

int main() {
    char name[100];
    int age;
    char address[200];

    
    printf("Enter your full name: ");
    scanf("%[^\n]%*c", name);

    
    printf("Enter your age: ");
    scanf("%d%*c", &age);

    
    printf("Enter your address: ");
    scanf("%[^\n]%*c", address);

    
    printf("\n--- User Information ---\n");
    printf("Name    : %s\n", name);
    printf("Age     : %d\n", age);
    printf("Address : %s\n", address);

    return 0;
}

