/*Write a program in C to show the concept of passing structure in function and returning structure
from the function program in C to store the "id, name and percentage" for one student.Pass the structure
variable in function , called as Input() and take the necessary inputs.Then pass the variable in Ooutput
() function and display all the necessary information.*/

#include<stdio.h>
#include<string.h>

struct Student{
    int id;
    char name[50];
    float percentage;
};
void input(struct Student *student){
    printf("Enter ID:");
    scanf("%d",&student->id);
    printf("Enter student name:");
    scanf("%s",student->name);
    printf("Enter percentage obtained:");
    scanf("%f",&student->percentage);
}
void output(const struct Student *student){
    printf("\nStudent Information:\n");
    printf("Student id: %d\n",student->id);
    printf("Student Name:%s\n",student->name);
    printf("Percentage Obtained:%.2f\n",student->percentage);
}
int main(){
    struct Student student;
    input(&student);
    output(&student);
}
