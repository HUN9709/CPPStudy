#include "example.h"

struct student
{
	int num;
	double grade;
};
typedef struct student Student;
void print_data(Student* ps);

int p533(void)
{
	Student s1 = { 315, 4.2 };
	print_data(&s1);
	return 0;
}

void print_data(Student* ps)
{
	printf("%d\n", ps->num);
	printf("%lf", ps->grade);

}