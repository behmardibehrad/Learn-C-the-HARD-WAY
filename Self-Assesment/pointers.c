#include<stdio.h>

int main(int args, char*argv[])
{

int  var1=20;
char var2[10];
     var2[1] = 'a';


int    *ip;    /* pointer to an integer */
double *dp;    /* pointer to a double */
float  *fp;    /* pointer to a float */
char   *cp;     /* pointer to a character */

   int  *ptr = NULL;

   printf("The value of ptr is : %x\n", ptr  );


ip = &var1;  /* store address of var in pointer variable*/

printf("Address of var variable: %x\n", &var1  );

/* address stored in pointer variable */
printf("Address stored in ip variable: %x\n", ip );

/* access the value using the pointer */
printf("Value of *ip variable: %d\n", *ip );

printf("Value of var1 variable: %d\n", var1  );
printf("Value of var2[1] variable: % c\n", var2[1]  );
printf("Address of var1 variable: %x\n", &var1  );
printf("Address of var2 variable: %x\n", &var2  );


return 0;

}
