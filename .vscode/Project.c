#include <stdio.h>
#include <conio.h>

#define A_RANGE "(85-100)"
#define B_RANGE "(70-84)"
#define C_RANGE "(55-69)"
#define D_RANGE "(0-54)"
#define A_START 85
#define B_START 70
#define C_START 55

void calculate(float grd);
void show(int count0, int count1, int count2, int count3, int count4, float sum);

void calculate(float grd)
{
	int count1 = 0, count2 = 0, count3 = 0, count4 = 0, count0 = 0;
	float sum = 0;

	while (grd >= 0 && grd <= 100)
	{
		if (grd >= 85 && grd <= 100) count1++;
		else if (grd >= 70 && grd <= 84) count2++;
		else if (grd >= 55 && grd <= 69) count3++;
		else if (grd >= 0 && grd <= 54) count4++;
		sum = sum + grd;
		count0++;
		show(count0, count1, count2, count3, count4, sum);
		printf("Enter marks between 0 to 100 for the summary.\n");
		printf("Enter one mark at a time from here ==>");
		scanf("%f", &grd);
	}
	
	if (grd == -1)
	{
		printf("'-1' clears all counters.\n");
		show(0, 0, 0, 0, 0, 0);

		printf("Enter marks between 0 to 100 for the summary.\n");
		printf("Enter one mark at a time from here ==>");
		scanf("%f", &grd);
	}
	else if (grd < 0 || grd > 100 && grd != -1 && grd != 999)
	{
		printf("Invalid\n");
		count1 = count1;
		count2 = count2;
		count3 = count3; 
		count4 = count4;
		sum = sum;
		count0 = count0;
		show(count0, count1, count2, count3, count4, sum);
		printf("Enter marks between 0 to 100 for the summary.\n");
		printf("Enter one mark at a time from here ==>");
		scanf("%f", &grd);
	}
	else
	{
		if (grd = 999)
			printf("999 exits the program\n");
	}
}

void show(int count0, int count1, int count2, int count3, int count4, float sum)
{
	float average = 0;
	if (sum == 0)
	{
		average = 0;
	}
	else average = sum / count0;

	printf("GRADING SUMMARY\n");
	printf("Total number of A %s  %d\n", A_RANGE, count1);
	printf("Total number of B %s  %d\n", B_RANGE, count2);
	printf("Total number of C %s  %d\n", C_RANGE, count3);
	printf("Total number of F %s  %d\n", D_RANGE, count4);
	printf("------------------------------------\n");
	printf("Sum = %.1f & Count0 = %d\n the average = %.1f\n\n", sum, count0, average);
}

int main()
{
	float sum = 0, grd = 0;

	printf("GRADING SUMMARY\n");
	printf("Total number of A %s  0\n", A_RANGE);
	printf("Total number of B %s  0\n", B_RANGE);
	printf("Total number of C %s  0\n", C_RANGE);
	printf("Total number of F %s  0\n", D_RANGE);
	printf("-----------------------------------");
	printf("The average of marks entered = 0.0\n\n");

	printf("Enter marks between 0 to 100 for the summary\n");
	printf("Enter -1 to clear all counters.\nEnter 999 to exit the program.\n");
	printf("Enter one mark at a time from here ==>");
	scanf("%f", &grd);
	printf("\n\n");

	calculate(grd);

	getch();
	return 0;
}