//largest of three numbers
#include <stdio.h>

int main()
{
 short int a,b,c;
 printf("%ld",sizeof(short int));
 scanf("%hd%hd%hd",&a,&b,&c); //the format specifer of short int is hd
 if(a>b && a>c)
 {
 printf("%hd is largest",a);
  printf("\n%hd and %hd are  is lesser than %hd",c,b,a);
 }
 else
  if(b>a && b>c)
 {
     printf("%hd is largest",b);
      printf("\n %hd and %hd are  is lesser than %hd",a,c,b);
 }
else
{
  printf("%hd is largest",c);
  printf("\n %hd and %hd are  is lesser than %hd",a,b,c);
}
    return 0;
}