#include "example.h"

struct student
{
	int num;
	char* name;
	int scores[3];
	int total;
	double avg;
	char grade;
};
typedef struct student Student;

enum subject_index {KOR, ENG, MATH};

void sort(Student*);


int p540(void)
{
	Student students[5] = {
		{315, "홍길동", {80, 75, 90}},
		{316, "이순신", {88, 92, 100}},
		{317, "서하윤", {95, 99, 98}},
		{318, "유관순", {84, 70, 72}},
		{319, "박신혜", {60, 65, 40}},
	};


	printf("# 정렬 전 데이터...\n");
	for (int i = 0; i < 5; ++i)
	{
		students[i].total = students[i].scores[0] + students[i].scores[1] + students[i].scores[2];
		students[i].avg = (double)students[i].total / 3;
		switch ((int)students[i].avg / 10)
		{
			case 9:
				students[i].grade = 'A';
				break;
			case 8:
				students[i].grade = 'B';
				break;
			case 7:
				students[i].grade = 'C';
				break;
			default:
				students[i].grade = 'F';
		}


		printf("%5d %5s %5d %5d %5d %5d %5.1lf %5c\n",students[i].num,
								students[i].name,
								students[i].scores[0],
								students[i].scores[1],
								students[i].scores[2],
								students[i].total,
								students[i].avg,
								students[i].grade);
	}//eo for

	sort(students);

	printf("# 정렬 후 데이터...\n");
	for (int i = 0; i < 5; ++i)
	{
		printf("%5d %5s %5d %5d %5d %5d %5.1lf %5c\n", students[i].num,
			students[i].name,
			students[i].scores[0],
			students[i].scores[1],
			students[i].scores[2],
			students[i].total,
			students[i].avg,
			students[i].grade);
	}//eo for

	return 0;
}

void sort(Student* students)
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4 - i; ++j)
		{
			if (students[j].total < students[j + 1].total)
			{
				Student tmp;
				tmp = students[j];
				students[j] = students[j + 1];
				students[j + 1] = tmp;
			}
		}
	}
}