// pointer arithmatic
#include <stdio.h>
int main()
{
    int p=10;
    int *a=&p;
    printf("%x\n",a);
    printf("%d\n",p);
    a++;
    printf("%x\n",a);//prints the next adress -[present address+1*sizeof(the data type it is pointing to)]
    printf("%d\n",*a);//shows garbage value as we didnt initial/assign next address with any value

    return 0;
}