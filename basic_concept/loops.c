//
#include <stdio.h>
int main()
{
 unsigned  int n,i=1;
 printf("enter the number for the table");
 scanf("%u",&n);
 //using for loop
 for(i=1;i<=20;printf("%d * %d = %d \n",n,i,(n*i)),i++);
 //printf("%d * %d = %d",n,i,(n*i));

  //using while loop
 while(i<=20)
 {
 printf("%u * %u = %u\n",n,i,(n*i));
 i++;
 }
 
 //using do- while loop
  do {
        printf("%u * %u = %u\n", n, i, (n * i));
        i++;
    } while(i <= 20);
    return 0;
}