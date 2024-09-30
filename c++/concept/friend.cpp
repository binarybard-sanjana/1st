//Program to accept a complex value and to print it using friend function.
# include <iostream>
using namespace std;
class complex;
void accept(complex *);//it is a forward declration ,it must be a match with the below declration
class complex
{
  private: int r, i;
  public:
   friend void accept(complex * );
   friend void display(const complex *);
};
void accept(complex * p )
{
   cout<<"Enter r and i value\n";
   cin>>p->r>>p->i;
}
void display(const complex * p )
{
  cout<<p->r<<"+i"<<p->i<<endl;
}
int main( ) 
{
  complex c1;
  accept(&c1);
  display(&c1);
  return 0;
}
