
#include <stdio.h>
int main (void)

{

    int integer1;
    int integer2;
    int integer3;

    printf("enter first number \n");
    scanf ("%d", &integer1);

    printf("enter second number \n");
    scanf("%d", &integer2);

    printf("Enter third number \n");
    scanf("%d", &integer3);

    if ((integer1 > integer2) &&(integer1 > integer3))
    {
        printf("%d is the largest number",integer1);
    }

    else if ((integer2 > integer1) && (integer2 > integer3))
        printf("%d is the lareget number",integer2);


   else if ((integer3 > integer1) && (integer2 < integer3))
      printf("%d is the largest number", integer3);

    return 0;

}
