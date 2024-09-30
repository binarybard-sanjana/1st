//Program to accept a complex value and to print it using friend function.where add is a friend function
# include <iostream>
using namespace std;
class complex;
void accept(complex *);//it is a forward declration ,it must be a match with the below declration
class complex
{
  private: int r, i;
  public:
   void accept( );
   void display()const;
   friend void add( const complex & ,const  complex & ,const complex &);
};
void complex:: accept( )
{
   cout<<"Enter r and i value\n";
   cin>>this->r>>this->i;
 
}
void complex::display( )const//defination of member function
{
  cout<<r<<"+i"<<i<<endl;
}
void add(const complex & c1 , const complex & c2 ,const complex & c3)
{
    
    c3.r=c1.r+c2.r;
    c3.i=c1.i+c2.i;
    c3.display();
}
int main( ) 
{
  complex c1,c2,c3;
  accept(&c1);
   accept(&c2);
  add(c1,c2,c3);
  return 0;
}