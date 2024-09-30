 //shallow copy- modifications if one of the objects modifies the pointed-to data.
 #include <iostream>
 #include<string.h>
using namespace std;
struct complex
 {
        int *r,*i; 
 };
int main()
{
    complex c1={new int (10),new int (20)};
    complex c2 =c1;//this is shallow copy
    (*(c2.r))++;
return 0; }