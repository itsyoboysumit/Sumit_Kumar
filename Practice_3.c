#include <stdio.h>

typedef struct employee{
    char name[30];
    int salary;
    char city[30];
    int aadhar;
}emp;
int main(){
    emp employee;
    printf("Enter the name of the employee:");
    fgets(employee.name,sizeof(employee.name),stdin);
    printf("Enter the salary of the emnployee:");
    scanf("%d",&employee.salary);

    getchar();// consuming the newline character left in integer buffer

    printf("Enter the name of the city:");
    fgets(employee.city,sizeof(employee.city),stdin);
    printf("Enter the aadhar no:");
    scanf("%d",&employee.aadhar);

    printf("\n%s\n%d\n%s\n%d",employee.name,employee.salary,employee.city,employee.aadhar);

    return 0;
}