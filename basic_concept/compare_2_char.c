#include <stdio.h>

int main()
{
 char p,q;
 scanf("%c",&p);
 scanf("%c",&q);
 printf("%d%d",p,q);
 if(p>q)
 printf("p is greater");
 else
 printf("q is greater");

    return 0;
}