/*CREATOR:RISHAB JAIN 
Creation date:30/5/2021
 Store data in a structure(use of structures in C)*/
#include <stdio.h>
//defining a structure
struct student {
    char firstName[50];
    int rollno;
    float marks;
}s[5];

int main() {
    int i;
    printf("Enter information of students:\n");
   
   // storing information
    for (i = 0; i < 2; ++i) {
        s[i].rollno = i + 1;
        printf("\nFor roll number%d,\n", s[i].rollno);
        printf("Enter first name: ");
        scanf("%s", s[i].firstName);
        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }
    printf("Displaying Information:\n\n");

    // displaying information
    for (i = 0; i < 2; ++i) {
        printf("\nRoll number: %d\n", i + 1);
        printf("First name: ");
        puts(s[i].firstName);
        printf("Marks: %.1f", s[i].marks);
        printf("\n");
    }
    return 0;
}