// To print adress and value and modify value using pointers,
#include<stdio.h>
int main()
{
    int a=100;
   int *p=&a;
    printf("the adress of p:%x\n", &p);
    printf("the content of p pointing that is a of p:%d\n", *p);
    printf("the content of p:%d\n", p);
    //lets look at a
  
     printf("the adress of a:%d\n", &a);
    printf("the content of a:%d\n", a);
    //to modify value using a pointer
    *p=200;
    printf("when value is modified in a by pointer");
     printf("the content of p pointing that is a of p:%d\n", *p);
     printf("the content of a:%d\n", a);
    return 0;



}