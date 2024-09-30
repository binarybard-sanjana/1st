//how to print a value using pointers when value is stored in dymanic memory
 #include <iostream>
 #include<string.h>
using namespace std;
struct Complex
 {
        int *r,*i;//pionter just dont store adress of variable but it as 
    };
int main()
{
    Complex c1 ={new int(10),new int (20)};//here the new returns the adress to r,i respectively
    cout<<*(c1.r)<<endl<<(*(&c1)->i);
     delete c1.r;
    delete c1.i;
   
return 0; }