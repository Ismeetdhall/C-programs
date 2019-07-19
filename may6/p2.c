#include<stdio.h>
void main()
{
  int num;
    int a,b,c,d;
printf("enter a four digit num");
scanf("%d",&num);

a = num/1000;
num = num%1000;
b=num/100;
num=num%100;
c=num/10;
d=num%10;

num = (d*1000)+(c*100)+(b*10)+a;

printf("\n %d",num);


}
