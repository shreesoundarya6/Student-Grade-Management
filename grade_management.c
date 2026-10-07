#include <stdio.h>
int main() 
{
    char name[50];
    int mark1, mark2, mark3;
    int total;
    float average;
    char grade;
    printf("Enter student name: ");
    scanf("%s", name);
    printf("Enter marks for 3 subjects: ");
    scanf("%d %d %d", &mark1, &mark2, &mark3);
    total = mark1 + mark2 + mark3;
    average = total / 3.0;
    if (average >= 90)
        grade = 'A';
    else if (average >= 80)
        grade = 'B';
    else if (average >= 70)
        grade = 'C';
    else if (average >= 60)
        grade = 'D';
    else if (average >= 50)
        grade = 'E';
    else
        grade = 'F';
    printf("\n-------------- Student Grade Report---------------\n");
    printf("Name    : %s\n", name);
    printf("Total   : %d\n", total);
    printf("Average : %.2f\n", average);
    printf("Grade   : %c\n", grade);
    return 0;
}
  
