#include <stdio.h>
#include <stdlib.h>

#define LINE_LEN	1024
typedef struct 
{
	char last_name[20]; 
	char first_name[20]; 
	char ssn[20]; 
	double test1; 
	double test2; 
	double test3; 
	double test4; 
	double final; 
	char grade; 
} Student; 

int main(void)
{
	char title[9][20]; 
	char line[LINE_LEN]; 
	Student student[20]; 
	int index = 0; 

	char *file_name = "grades.csv"; 
	FILE *fp = fopen(file_name, "r"); 
	if (!fp)
	{
		perror("fopen"); 
		exit(1); 
	}

	fgets(line, LINE_LEN, fp); 
	sscanf(line, "%s, %s,%*s%s,%*s%s,%*s%s,%*s%s,%*s%s,%*s%s,%*s%s\n", 
			title[0], title[1], title[2], title[3], title[4], title[5], title[6], title[7], title[8]); 

	while (!feof(fp))
	{
		char line1[LINE_LEN]; 
		fgets(line1, LINE_LEN, fp); 
		sscanf(line1, "%s,%*s%s,%*s%s,%*s%lf,%*s%lf,%*s%lf,%*s%lf,%*s%lf,%*s%c\n", 
				student[index].last_name, 
				student[index].first_name, 
				student[index].ssn, 
				&student[index].test1, 
				&student[index].test2, 
				&student[index].test3, 
				&student[index].test4, 
				&student[index].final, 
				&student[index].grade); 
		index++; 
	}

	printf("%-20s %-20s %-20s %-10s %-10s %-10s %-10s %-10s %-10s\n", 
			title[0], title[1], title[2], title[3], title[4], title[5], title[6], title[7], title[8]); 
	printf("--------------------------------------------------------------------------------------------------------------------\n"); 

	for (int i=0; i<index; i++)
	{
		printf("%s %s %s %lf %lf %lf %lf %lf %c\n", 
				student[i].last_name, 
				student[i].first_name, 
				student[i].ssn, 
				student[i].test1, 
				student[i].test2, 
				student[i].test3, 
				student[i].test4, 
				student[i].final, 
				student[i].grade); 
	}

	return 0;  
}
