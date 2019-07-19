#include<stdio.h>
void main()
{
    int age;
    char gender,married,unmarried,person,male,female;

    printf("\n\nenter details 0f person\n\n");

    printf("\nwhether person is married or unmarried\n");
    scanf("%c",&person);

    printf("\nenter age of person\n");
    scanf("%d",&age);

    printf("\nenter gender of person\n");
    scanf("%c",&gender);

    if(person==married)
    {
        printf("person is insured");
    }

    else if(person==unmarried&&age>21&&gender==male)
    {
     printf("person is insured");
    }

    else if(person==unmarried&&age>18&&gender==female)
    {
     printf("person is insured");
    }

    else
    {
        printf("person is not insured");

    }

}
