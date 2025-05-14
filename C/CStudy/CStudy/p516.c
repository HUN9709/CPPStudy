#include "example.h"

struct vision
{
	double left;
	double right;
};

struct vision exchange(struct vision robot);

int p516(void)
{
	struct vision robot;

	printf("½Ã·Â");
	scanf("%lf %lf", &(robot.left), &(robot.right));
	robot = exchange(robot);
	printf("%lf %lf", (robot.left), (robot.right));
}

struct vision exchange(struct vision robot)
{
	double temp;

	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}