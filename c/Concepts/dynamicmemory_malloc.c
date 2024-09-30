// memory acquiring for dynamic memory and checking the addresses

#include <malloc.h>

int * Allocate();
int main() {
int *p=NULL,*q=NULL,*r=NULL;
// Memory allocation
printf("%x\n",&p);//adress of p
p=Allocate(); 
printf("%d \n",p);//the content of p
printf("%x\n",&p);//the adress of p
q=Allocate(); 
printf("%x \n",q);
r=Allocate();
printf("%x\n",r);
//Reading for the location pointed by p and q
scanf("%d%d",p,q);
(*r) = (*p) + (*q);
printf("%d + %d = %d\n",*p,*q,*r);
free(p); free(q); free(r);// Deallocation of the memory pointed by p, q and r
printf("%x \n",r);
printf("%x \n",p);
printf("%x\n",q);

return 0;
}
int * Allocate( )
{
int *a=NULL;
a = (int *) malloc(sizeof(int));
return a;
}