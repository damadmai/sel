/*  calc4.c  */
/*  four-function calculator  */
#include <stdio.h>
main()
{
     float num1,num2;
     char op;

     while(1)
          {
          printf("Type number, operator, number\n");
          scanf("%f %d %f",&num1,&op,&num2);
          switch(op)
               {
               case'+':
                    printf(" = %f",num1+num2);
                    break;
               case'-':
                    printf(" = %f",num1-num2);
                    break;
               case'*':
               case'x':
                    printf(" = %f",num1*num2);
                    break;
               case'/':
 /*              case':':
               case'\':   */
                    printf(" = %f",num1/num2);
                    break;
               default:
                    printf("Unknown operator");
               }
          printf("\n");
          return 0;
          }
}


