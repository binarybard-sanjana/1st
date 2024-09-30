//find the 1 and 2 largest of three numbers
#include <stdio.h>

int main()
{
 short int a,b,c,l1,l2;
 printf("%ld",sizeof(short int));
 scanf("%hd%hd%hd",&a,&b,&c); //the format specifer of short int is hd
 if(a<b && a<c)
 {
  if(b>c)
  {l1=b;l2=c;}
 
  else
 { l1=c;l2=b;}
 }
 else
  if(b<a && b<c)
 {
    if(a>c)
  {l1=a;l2=c;}
  else
  {l1=c;l2=a;}
 }
else
{
  if(a>b)
  {l1=a;l2=b;}
  else
  {l1=b;l2=a;}
}

  printf("1st largest is %hd",l1);
  printf("2nd largest is %hd",l2);
    return 0;
}