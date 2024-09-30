//Structure in c++
#include <iostream>
using namespace std;
struct complex
{
int r, i;
};
typedef struct complex cmp;
int main( )
{
cmp c1; // c1 is a variable of type struct complex
cout<<"Enter value for complex number\n";
cin >>(c1.r) >>(c1.i) ;
cout<<"Complex value is\n";
cout << c1.r <<"+i"<< c1.i;
return 0;
}