// array
#include <stdio.h>

int main()
{
     int a[10];//initialisation of array
    printf("%x\n",a);//prints base address of "a".
    //a++;-this cant be done as array name is a constant pointer whos address can be modified
    return 0;
    //pointing variable pointer to a constant pointer
    int *q=NULL;
    q=a;
    // we will see same value
    printf("%x",q[0]);//gives value stored in a[0]
    printf("%x",a[0]);//gives value stored in a[0]
    q++;
    printf("%x",q[0]);//gives value stored in a[1] as q is incremented
}