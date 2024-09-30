#include<stdio.h>
int main()
{
    int a=10; //variable is defined
     printf("%d",a);
    int *p=NULL; //pointer is initialized
    p=&a; //pointer is pointing to "a"
    printf("the address of p=",p);

//accessing variable's value via pointer "p"
    *p=50; //changing value of "a" using "p"

 // the value can be printed using all these 
     printf("%d",*(&a)); 
     printf("%d",*p);
     printf("%d",a);
    printf("%d",sizeof(a));//to determine the size (in bytes) of a variable or data type.
    return 0;

}