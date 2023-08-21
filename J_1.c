/*Write a program in C to store and access the "id, name and percentage" for one student.Use the concept
of Structure. Assign 25, Babai, 89.67 in id, name and percentage respectively.Print all the information
in seperate line.*/
#include <stdio.h>
#include <string.h>

struct
{
    int id;
    char *name;
    float percentage;
} student;
int main()
{
    student.id = 111;
    student.name = "sumit";
    student.percentage = 78.6;
    printf("ID:%d\nNAME:%s\nPERCENTAGE:%f", student.id, student.name, student.percentage);
}