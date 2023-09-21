#include <stdio.h>

struct employee
{
    int empno;
    char name[100];
    int age, salary;
} e[100];

int main(void)
{ 
    struct employee emp[100]
    int i, n;
    clrscr();

        printf("Enter the number of employees\n");
        scanf("%d",&n);
            for (i=0;i<n;i++)
                {
                    printf("\n Enter employee number : ");
                    scanf("%d",&e[i].empno);
                    printf("\n Enter name of employee : ");
                    scanf("%s",&e[i].name);
                    printf("\n Enter age of employee : ");
                    scanf("%d",&e[i].age);
                    printf("\n Enter salary of employee : ");
                    scanf("%d",&e[i].salary);
                }   
        printf("\n Emp. No. Name \t Age \t Salary \n\n");
            for (i=0;i<n;i++)
                printf("%d \t %s \t %d \%d \n", 
e[i].empno,e[i].name,e[i].age,e[i].salary);
return 0;
}
