#include<stdio.h>
#include<string.h>
struct student 
{
    char name[10];
    char branch[10];
    int usn;

};
//void accept(int *p, int *q);
//void swap(int *p,int *q,int *r);
//void display(int *p,int *q);
int main()
{
    struct student s1,*p ;
    //p=&s1;
    accept(s1);
    //swap(&s1);
    display(s1);
    return 0;
    }

void accept(struct student s1 )
{

 // printf("Enter values for a b\n");
    scanf("%s %s %d",(s1).name,(s1).branch,(s1).usn);
}
//void swap(struct student *p )
//{
  // char swp; 
    //swp=p.name;
    //*p.name=*p.branch;
    //*p.branch=swp;
//}
void display(struct student s1)
{
    printf("%s",(s1).name);
    printf("%s", (s1).branch);
    printf("%d", (s1).usn);
}