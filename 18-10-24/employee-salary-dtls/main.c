
#include <stdio.h>
struct Employee {
	int id;
	char name[50];
	float salary;
};
int main()
{
	float newsalary;
	struct Employee a;

	printf("Enter the Name of the Employee: ");
	fgets(a.name,sizeof(a.name),stdin);

	printf("Enter the ID of the Employee: ");
	scanf("%d",&a.id);

	printf("Enter the Salary of the Employee: ");
	scanf("%f",&a.salary);

	newsalary=a.salary + (a.salary * 0.1);

	printf("Employee Details:\n");
	printf("\nEmployee ID: %d\n", a.id);
	printf("Employee Name: %s", a.name);
	printf("Updated Salary(10-prctg): %f\n",newsalary);

	return 0;
}
