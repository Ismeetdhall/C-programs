#include<stdio.h>
void main()
{
     int ans , val1 , val2;
     char choice;

     printf("\n\n\nSimple Calculator");
     printf("\n--------------------------\n");
     printf("Press any of following:");
     printf("\n + for Add");
     printf("\n - for Sub");
     printf("\n * for Mul");
     printf("\n / for Div");
     printf("Your Choice : ");
     scanf("%c",&choice);

     printf("\n Now enter any two values....");
     printf("\nValue 1 : ");
     scanf("%d",&val1);
     printf("\nValue 2 : ");
     scanf("%d",&val2);

     switch(choice)
     {
         case '+' : {ans = val1 + val2; break;}
         case '-' : {ans = val1 - val2; break;}
         case '*' : {ans = val1 * val2; break;}
         case '/' : {ans = val1 / val2; break;}
         default :  {
                        ans =0;
                        printf("\nWrong Choice selection\n");
                        break;
                    }
     }
     printf("\n--------------------------\n");
     printf("%d %c %d = %d",val1 ,choice , val2 , ans);
     printf("\n--------------------------\n");
}
