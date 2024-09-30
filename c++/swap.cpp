#include <iostream>
using namespace std;

void accept(int *a,int *b)
{
     cout<<"enter the values for a and b :";
      cin>>(*a) >>(*b);
}

void swap(int *a,int *b )
{
    int t;
    t=*a;
     *a=*b;
     *b=t;
}
void print(int a,int b)
{
    cout<< "a=" <<a <<"b=" <<b;
}
int main()
{
     int a,b;
      accept(&a,&b);
      swap(&a,&b);
      print(a,b);
      return 0;
      
}