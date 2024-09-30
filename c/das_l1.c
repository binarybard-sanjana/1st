#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define days 3
struct activity
{
    char *day ;char *desc;
    int date;
};
typedef struct  activity plan;
plan *create();
void read(plan*);
void display(plan *);
int main()
{
    plan*cal=NULL; 
    cal=create();
    read(cal);
    display(cal);
    return 0;
}
plan * create()
{
    plan *t=(plan *)malloc(sizeof(plan)*7);
    if(t==NULL)
    {
        printf("insuffcient memory");
        return 0;
    }
    return t;
    }
    void read(plan* p)
    {
        for (int i=0;i<days;i++)  
        {
            p[i].day=(char *)malloc (10);
            printf("enter the day");
            scanf("%s",p[i].day);
             printf("enter the date");
             scanf("%d",&p[i].date);
              p[i].desc=(char *)malloc (80);
               printf("enter the decription");
             scanf("%s",p[i].desc);
             p[i].desc=(char*)realloc(p[i].desc,strlen(p[i].desc+1));
        }
    }
    void display(plan *p)
    {
        for(int i=0;i<days;i++)
        {
            printf("%s",p[i].day);
            printf("%d",p[i].date);
            printf("%s",p[i].desc);
         }
    }