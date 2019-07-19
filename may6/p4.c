#include<stdio.h>
void main()
{
    int r,l,length,breadth,b,h,side,Area,circle,triangle,square,rectangle;

    printf("enter choice of Area");
    scanf("%d",&Area);

    printf("enter r");
    scanf("%d",&r);

     printf("enter l");
    scanf("%d",&l);

     printf("enter b");
    scanf("%d",&b);

     printf("enter h");
    scanf("%d",&h);

     printf("enter length");
    scanf("%d",&length);

     printf("enter breadth");
    scanf("%d",&breadth);


    switch(Area)
    {
        case'circle':{Area = 2*3.14*r; break; }
        case'triangle':{Area = 1/2*b*h; break; }
        case'square':{Area = side*side; break; }
        case'rectangle':{Area = length*breadth; break; }
        default:{Area = 0; break; }

        printf("\n\narea = %d",area\n\n);



    }
