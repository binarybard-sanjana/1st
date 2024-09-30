#include <stdio.h>
void accept(int *p, int *q);
void add(int p, int q, int *r);
void display(int p, int q,int *r);
void accept(int *p, int *q)
{

  printf("Enter values for a b\n");
    scanf("%d %d",p,q);
  
}

void add(int p,int q ,int *r)
{
    *r= p+q;
}

void display(int p, int q,int *r)
{
    printf("%d+%d=%d",p,q,*r);
}
int main() {
    int a,b,c;
    accept(&a,&b);
    add(a,b,&c);
    display(a,b,&c);
    
    return 0;
}