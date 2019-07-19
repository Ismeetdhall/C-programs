#include<stdio.h>

void main()
{
     int inputSec;
     int hr, min, sec;

     printf("Enter total number of sec");
     scanf("%d",&inputSec);

     hr = inputSec/3600;
     sec =inputSec%3600;

     min = sec/60;
     sec = sec%60;

     printf("\nTotal Sec input : %d",inputSec );
     printf("\nHr  : %d",hr );
     printf("\nMin : %d",min );
     printf("\nSec : %d",sec );



}
