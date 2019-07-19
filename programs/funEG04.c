#include<stdio.h>
#include "basicFunctions.h"

void main()
{
    myLine2('+',30);

    char ch = getCharValue();
    int v1 = getIntValue();
    int v2 = getIntValue();

    int result = calculator(ch,v1,v2 );
    printf("\n Answer : %d", result);
    myLine2('+',30);


}
