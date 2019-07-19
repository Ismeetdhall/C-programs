#include<stdio.h>
void main()
{

    unsigned long num;
    unsigned long  n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    unsigned long  count1,count2,count3,count4,count5,count6,count7,count8,count9,count10;
    count1=count2=count3=count4=count5=count6=count7=count8=count9=count10=0;


    printf("enter a ten digit num");
    scanf("%ld",&num);
    printf("\n\n\nEntered number : %ld",num);

    n1 = num/10000000000;
    num = num%10000000000;

    n2 = num/1000000000;
    num = num%1000000000;

    n3 = num/100000000;
    num = num%100000000;

    n4 = num/10000000;
    num = num%10000000;

    n5 = num/1000000;
    num = num%1000000;

    n6 = num/100000;
    num = num%100000;

    n7 = num/10000;
    num = num%10000;

    n8 = num/1000;
    num = num%1000;

    n8 = num/100;
    num = num%100;

    n9 = num/10;
    n10 = num%10;

/*
    printf("\n 1 : %ld",n1);
    printf("\n 2 : %ld",n2);
    printf("\n 3 : %ld",n3);
    printf("\n 4 : %ld",n4);
    printf("\n 5 : %ld",n5);
    printf("\n 6 : %ld",n6);
    printf("\n 7 : %ld",n7);
    printf("\n 8 : %ld",n8);
    printf("\n 9 : %ld",n9);
    printf("\n 0 : %ld",n10);

*/

    if(n1==1 || n2==1 || n3==1  || n4==1 || n5==1 || n6==1 || n7==1 || n8==1 || n9==1 || n10==1)
    {
        count1++;
    }
    if(n1==2 || n2==2 || n3==2  || n4==2 || n5==2 || n6==2 || n7==2 || n8==2 || n9==2 || n10==2)
    {
        count2++;
    }
    if(n1==3 || n2==3 || n3==3  || n4==3 || n5==3 || n6==3 || n7==3 || n8==3 || n9==3 || n10==3)
    {
        count3++;
    }
    if(n1==4 || n2==4 || n3==4  || n4==4 || n5==4 || n6==4 || n7==4 || n8==4 || n9==4 || n10==4)
    {
        count4++;
    }

    if(n1==5 || n2==5 || n3==5  || n4==5 || n5==5 || n6==5 || n7==5 || n8==5 || n9==5 || n10==5)
    {
        count5++;
    }

    if(n1==6 || n2==6 || n3==6 || n4==6 || n5==6 || n6==6 || n7==6 || n8==6 || n9==6 || n10==6)
    {
        count6++;
    }

    if(n1==7 || n2==7 || n3==7  || n4==7 || n5==7 || n6==7 || n7==7 || n8==7 || n9==7 || n10==7)
    {
        count7++;
    }

    if(n1==8 || n2==8 || n3==8  || n4==8 || n5==8 || n6==8 || n7==8 || n8==8 || n9==8 || n10==8)
    {
        count8++;
    }

    if(n1==9 || n2==9 || n3==9  || n4==9 || n5==9 || n6==9 || n7==9 || n8==9 || n9==9 || n10==9)
    {
        count7++;
    }

    if(n1==0 || n2==0 || n3==0  || n4==0 || n5==0 || n6==0 || n7==0 || n8==0 || n9==0 || n10==0)
    {
        count10++;
    }


    printf("\n 1 : %ld",count1);
    printf("\n 2 : %ld",count2);
    printf("\n 3 : %ld",count3);
    printf("\n 4 : %ld",count4);
    printf("\n 5 : %ld",count5);
    printf("\n 6 : %ld",count6);
    printf("\n 7 : %ld",count7);
    printf("\n 8 : %ld",count8);
    printf("\n 9 : %ld",count9);
    printf("\n 0 : %ld",count10);


}
