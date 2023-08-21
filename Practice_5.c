#include <stdio.h>
typedef struct student
{
    char name[30];
    int roll_no;
    int age;
    float marks;
} std;
int main()
{
    std s[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter name of the student %d:", i + 1);
        scanf("%s", s[i].name);
        printf("Enter roll number of the student %d:", i + 1);
        scanf("%d", &s[i].roll_no);
        printf("Enter age of the student%d:", i + 1);
        scanf("%d", &s[i].age);
        printf("Enter marks obtained by the student%d:", i + 1);
        scanf("%f", &s[i].marks);
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n**STUDENTS [%d] DETAILS**\n", i + 1);
        printf("Name:%s\n", s[i].name);
        printf("Roll No:%d\n", s[i].roll_no);
        printf("Age:%d\n", s[i].age);
        printf("Marks:%.2f\n", s[i].marks);
        printf("_______________\n");
    }
    return 0;
}