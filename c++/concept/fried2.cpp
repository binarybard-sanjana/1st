//Program to accept a complex value and to print it using friend function.where the display function is not a friend function and is called in the accept function
# include <iostream>
using namespace std;
class complex;
void accept(complex *);//it is a forward declration ,it must be a match with the below declration
class complex
{
  private: int r, i;
  public:
   friend void accept(complex * );
   void display()const;
};
void accept(complex * p )
{
   cout<<"Enter r and i value\n";
   cin>>p->r>>p->i;
  p->display();
}
void complex::display( )const//defination of member function
{
  cout<<r<<"+i"<<i<<endl;
}
int main( ) 
{
  complex c1;
  accept(&c1);
  //display(&c1);
  return 0;
}
