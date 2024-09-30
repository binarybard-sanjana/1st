// understanding *,&,sizeof operator
#include<stdio.h>
int main()
{
    int a=10;
    //int *(&a);
    printf("%d",*(&a));//yeilds value
    //printf("%d",*a);//not right as "a" being a variable only yeilds value
    printf("%d",&a);//yeilds address of a
    printf("%d",sizeof(a));
    return 0;

}