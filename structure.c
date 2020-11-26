#include <stdio.h>
struct employee{
char name[30];
int empid;
float salary;
};
int main()
{
struct employee emp;
printf("\n enter details:\n");
printf("name ?:");
printf("id ?: ");
printf("salary?: ");
gets(emp.name);
scanf("%d",&emp.empid);
scanf("%f",&emp.salary);
printf("\n entered details is: ");
printf("name: %s" ,emp.name);
printf("id: %d",emp.empid);
printf("salary: %f\n",emp.salary);
return 0;
}
