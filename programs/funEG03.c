#include<stdio.h>
#include "basicFunctions.h"

void main()
{
    myLine();

    myLine2('+',30);

    sumOfTwo(45,80);

    int x = sumOfTwoReturn(80,90);

    printf("\nAns is %d",x);

    int y = sumOfTwoInput();
    printf("\nAns is %d",y);

}
