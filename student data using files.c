#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentdb {
char name[100];
int s1, s2, s3;
float avg;
int rollno;
char grade;
};


int main() {
struct studentdb *s;
int i, n;
FILE *fp;
fp = fopen("studentDB.txt", "w");
printf("Enter the number of students:");
scanf("%d", &n);
s = (struct studentdb *)malloc(sizeof (struct studentdb) * n);
printf("Enter your inputs:\n");
for (i = 0; i < n; i++) {
printf("Input for student %d:\n", i + 1);
getchar();
printf("Name:");
fgets(s[i].name, 100, stdin);
s[i].name[strlen(s[i].name) - 1] = '\0';
printf("Marks in Eng, science and Maths:");
scanf("%d%d%d", &s[i].s1, &s[i].s2, &s[i].s3);
printf("Rollno:");
scanf("%d", &s[i].rollno);
}
fprintf(fp, "RollNo    Name           s1   s2   s3   Grade  avg\n");
fprintf(fp, "---------------------------------------------------\n");
for (i = 0; i < n; i++) {
fprintf(fp, "%-10d%-15s", s[i].rollno, s[i].name);
fprintf(fp, "%5d%5d%5d", s[i].s1, s[i].s2, s[i].s3);
s[i].avg = (s[i].s1 + s[i].s2 + s[i].s3) / 3;
if (s[i].avg > 80)
s[i].grade = 'A';
else if(s[i].avg > 60)
s[i].grade = 'B';
else
s[i].grade = 'C';
fprintf(fp, "%4c %4.2f\n", s[i].grade, s[i].avg);
}
fclose(fp);
return 0;
}

