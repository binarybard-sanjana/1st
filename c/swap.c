#include<stdio.h>
void accept(int *p, int *q);
void swap(int *p,int *q,int *r);
void display(int *p,int *q);

void accept(int *p, int *q)
{

  printf("Enter values for a b\n");
    scanf("%d %d",p,q);
}
void swap(int *p,int *q,int *r)
{
    *r=*p;
    *p=*q;
    *q=*r;
}
void display(int *p,int *q)
{
    printf("p=%d,q=%d",*p,*q);
}

int main()
{
    int a,b,temp;
    accept(&a,&b);
    swap(&a,&b,&temp);
    display(&a,&b);
    }