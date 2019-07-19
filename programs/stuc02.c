#include<stdio.h>

struct stu
{
    char name[30];
    int roll, marks,cls;
}stu1,stu2;

void main()
{
    printf("\nEnter Student Record\n");
    printf("\nEnter Name");
    gets(stu1.name);
    printf("\nEnter Roll Number");
    scanf("%d",&stu1.roll);
    printf("\nEnter Class");
    scanf("%d",&stu1.cls);
    printf("\nEnter Marks");
    scanf("%d",&stu1.marks);

    printf("\n----------------------------\n");
    printf("Student Record : %s \t %d \t %d \t %d" , stu1.name , stu1.roll , stu1.cls, stu1.marks);


    printf("\nEnter Student Record\n");
    printf("\nEnter Name");
    fflush(stdin);
    gets(stu2.name);
    printf("\nEnter Roll Number");
    fflush(stdin);
    scanf("%d",&stu2.roll);
    printf("\nEnter Class");
    scanf("%d",&stu2.cls);
    printf("\nEnter Marks");
    scanf("%d",&stu2.marks);

    printf("\n----------------------------\n");
    printf("Student Record : %s \t %d \t %d \t %d" , stu2.name , stu2.roll , stu2.cls, stu2.marks);

}
