#include <stdio.h>
int main()
{
  int x,y;
  scanf("%d%d",&x,&y);
  switch (x,y)
   {
  case 1:printf("addition=%d",x+y);
     break;
  case 2:printf("multplication=%d",x*y);
     break;
  case 3:printf("subtraction=%d",x-y);
     break;
  case 4:printf("division=%d",x/y);
     break;
  case 5:printf("reminder=%d",x%y);
     break;
  default:
    printf("it nis not valid");
   }
 }
