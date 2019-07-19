#include<stdio.h>
void main()
{
int marks,sub1,sub2,sub3;

printf("\nenter marks of sub1\n");
scanf("%d",&sub1);
printf("\nenter marks of sub2\n");
scanf("%d",&sub2);
printf("\nenter marks of sub3\n");
scanf("%d",&sub3);

marks = sub1+sub2+sub3;
printf("marks:%d",marks);

if(marks>280)
{
        printf("\n\ngrade is A\n\n");
}
else if(marks>=200&&marks<=279)
{
    printf("\n\ngrade is B\n\n");

}
else if(marks>=125&&marks<=199)
{
    printf("\n\ngrade is C\n\n");

}

else if(marks>=50&&marks<=124)
{
    printf("\n\ngrade is F\n\n");
}
 else
 {
     printf("\n\nNO GRADE\n");
 }

}
