#include<stdio.h>
void main()
{
    int marks,sub1,sub2,sub3,sub4,sub5;

    printf("\nenter marks of sub1\n");
    scanf("%d",&sub1);

    printf("\nenter marks of sub2\n");
    scanf("%d",&sub2);

    printf("\nenter marks of sub3\n");
    scanf("%d",&sub3);

    printf("\nenter marks of sub4\n");
    scanf("%d",&sub4);

    printf("\nenter marks of sub5\n");
    scanf("%d",&sub5);

    marks=sub1+sub2+sub3+sub4+sub5;
    printf("marks:%d",marks);

if(marks>450)
{
    printf("\ngrade is A+");
}
else if(marks>350&&marks<449)
{
    printf("\ngrade is A");
}
else if(marks>280&&marks<349)
{
    printf("\ngrade is B");
}
else if(marks>200&&marks<279)
{
    printf("\ngrade is C");
}
else if(marks>100&&marks<199)
{
    printf("\ngrade is D");
}
else if(marks>50&&marks<99)
{
    printf("\ngrade is E");
}

else
{
    printf("\n no grade \n");
}


}
