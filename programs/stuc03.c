#include<stdio.h>

struct stu
{
    char name[30];
    int roll, marks,cls;
};

void main()
{
    struct stu st[2];
    int i;
    for(i=0;i<=1;i++)
    {
        printf("\nEnter Student Record\n");
        printf("\nEnter Name");
        fflush(stdin);
        gets(st[i].name);
        printf("\nEnter Roll Number");
        fflush(stdin);
        scanf("%d",&st[i].roll);
        printf("\nEnter Class");
        scanf("%d",&st[i].cls);
        printf("\nEnter Marks");
        scanf("%d",&st[i].marks);
    }

    for(i=0;i<=1;i++)
    {
     printf("\n----------------------------\n");
     printf("Student Record : %s \t %d \t %d \t %d" , st[i].name , st[i].roll , st[i].cls, st[i].marks);
    }


}
