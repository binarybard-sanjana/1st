#include<stdio.h>
#include<math.h>
void price(float value);

int main()
{
 float value=100;
    price(value);
   // printf("the value is:%f \n",value);
   printf("the total price with GST is %f \n",value);
}
   


void price(float value)
{
    value=value+(0.18*value);
    printf("the total price with GST is %f \n",value);
    }