#include <stdio.h>

int main ()
{
   int  var1;
   int  var2;
   char var3[10];
   printf("Address of var1 variable: %x\n", &var1  );
   printf("Address of var2 variable: %x\n", &var2  );
   printf("Address of var3 variable: %x\n", &var3  );
   printf("\n\nAddress of var1 variable: %u\n", &var1  );
   printf("Address of var2 variable: %u\n", &var2  );
   printf("Address of var3 variable: %u\n", &var3  );
   return 0;
}
