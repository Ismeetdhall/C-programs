#include<stdio.h>
void main()
{
    int age;
    char gender,mstatus;

    printf("\n\nenter details 0f person\n\n");


    printf("\nenter age of person\n");
    scanf("%d",&age);

    fflush(stdin);
    printf("\nenter gender of person\nPress M for Male; F for Female");
    scanf("%c",&gender);

    fflush(stdin);
    printf("\nenter person is married\nPress M for Maried ; U for UnMarried");
    scanf("%c",&mstatus);


    if(mstatus=='M' || mstatus=='m')
    {
        printf("person is insured");
    }
    else
    {
        if((gender == 'M' || gender =='m') && age > 21)
        {
            printf("person is insured");
        }
        else if((gender == 'F' || gender =='f') && age > 18)
        {
            printf("person is insured");
        }
        else
        {
            printf("person is not insured");
        }
    }


}
