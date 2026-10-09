#include <stdio.h>

int main()
{ 
    int n1,n2,n3;
    scanf("%d%d%d",&n1,&n2,&n3);
    
    if(n1>n2 && n1>n3)
    printf("n1 is gretaest among 3 inetgers");
    
    else if(n2>n1&&n2>n3)
    printf("n2 is greater among 3 inetgers");
    
    else
    printf("n3 is greater among 3 inetgers");
    
    return 0;
}
