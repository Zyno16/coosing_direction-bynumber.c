#include <stdio.h>
#include <stdlib.h>

int main()
{ int num;

   printf("enter your number?:");
   scanf("%d",&num);
   switch (num) {
   case 6 :printf("you need to go right");
   break;
   case 4 :printf("you need to go left");
   break;
   case 8 :printf("you need to go up");
   break;
   case 2 :printf("you need to go down");
   default:printf("go to the desk help");
   break;




   }
    return 0;
}
