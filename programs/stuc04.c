#include<stdio.h>

struct stu
{
    char name[30];
    int roll, marks,cls;
    struct
    {
        int sub1,sub2,sub3;
    }sub;
};

void main()
{
    struct stu st[2];
    int i;
    for(i=0;i<=1;i++)
    {
        printf("\nEnter Student Record\n");
        printf("\nEnter Name : ");
        fflush(stdin);
        gets(st[i].name);
        printf("\nEnter Roll Number : ");
        fflush(stdin);
        scanf("%d",&st[i].roll);
        printf("\nEnter Class : ");
        scanf("%d",&st[i].cls);
        printf("\nEnter Marks of sub1 : ");
        scanf("%d",&st[i].sub.sub1);
        printf("\nEnter Marks of sub2 : ");
        scanf("%d",&st[i].sub.sub2);
        printf("\nEnter Marks of sub3 : ");
        scanf("%d",&st[i].sub.sub3);
        st[i].marks = st[i].sub.sub1 + st[i].sub.sub2 + st[i].sub.sub3;
    }

    for(i=0;i<=1;i++)
    {
     printf("\n----------------------------\n");
     printf("Student Record : %s \t %d \t %d \t %d" , st[i].name , st[i].roll , st[i].cls, st[i].marks);
    }


}
