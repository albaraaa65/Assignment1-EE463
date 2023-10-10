#include <stdio.h>

struct Student {
    char name[50];
    int grade;
};

int main() {
   
    struct Student students[10];
    int i;

   
    for(i = 0; i < 10; i++) {
        printf("Enter information for student %d:\n", i + 1);
        
      
        printf("Name: ");
        scanf("%s", students[i].name); 
        
        
        printf("Grade: ");
        scanf("%d", &students[i].grade);
    }

   
    printf("\nStudent Information:\n");
    for(i = 0; i < 10; i++) {
        printf("Student %d - Name: %s, Grade: %d\n", i + 1, students[i].name, students[i].grade);
    }

    return 0;
}

