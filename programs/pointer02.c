#include <stdio.h>

int main ()
{
   int  var1;
   int *ptr;
   printf("\nEnter Value ");
   scanf("%d",&var1);
   printf("\nValue is : %d\n", var1  );

   ptr = &var1;
   printf("\nValue through pointers %u", *ptr  );

  printf("\nAddress of  pointers %u", &ptr  );
  printf("\nAddress of  Var %u", &var1  );

  printf("\nValue at pointer %d", &(*ptr)  );

   return 0;
}
