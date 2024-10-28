#include<stdio.h>
#include<string.h>

//Q1. Define a structure Employee with member variables id, name, salary.
struct Employee
{
    int id;
    char name[30];
    float salary;
};

//Q2. Write a function to take input Employee data from the user.
struct Employee input()
{
    struct Employee e;
    char temp;
    printf("Enter id, name and salary of a Employee:\n");
    scanf("%d",&e.id);
    scanf("%c",&temp);
    fgets(e.name,30,stdin);
    e.name[strlen(e.name)-1] = 0;
    scanf("%f",&e.salary);
    return e;
}

//Q3. Write a function to display Employee data.
void display(struct Employee e)
{
    printf("{ %d, %s, %0.2f }",e.id, e.name, e.salary);
}

//Q4. Write a function to find the highest salary employee from a given array of 10 employees
struct Employee highestSalary_Emp(struct Employee empList[], int no_Emp)
{
    struct Employee e;
    e.salary = 0;
    for(int i=0; i<no_Emp; i++)
        if(empList[i].salary>e.salary)
            e = empList[i];

    return e;
}

//Q5. Write a fuction to sort employees accoeding to their salaries.
void sort_EmpbySal(struct Employee empList[], int no_Emp)
{
    struct Employee temp_emp;
    for(int i=0; i<no_Emp-1; i++)
        for(int j=i+1; j<no_Emp; j++)
            if(empList[i].salary>empList[j].salary)
            {
                temp_emp = empList[i];
                empList[i] = empList[j];
                empList[j] = temp_emp;
            }
}

//Q6. Write a function to sort employees according to their names.
void sort_Empbynames(struct Employee empList[], int no_Emp)
{
    struct Employee temp_emp;
    for(int i=0; i<no_Emp-1; i++)
        for(int j=i+1; j<no_Emp; j++)
            if(strcmp(empList[i].name,empList[j].name)==1)
            {
                temp_emp = empList[i];
                empList[i] = empList[j];
                empList[j] = temp_emp;
            }
}



int main()
{
    struct Employee empArr[10];
    for(int i=0; i<10; i++)
        empArr[i] = input();
    sort_Empbynames(empArr,10);
    for(int i=0; i<10; i++)
    {   
        display(empArr[i]);
        printf("\n");
    }   
}