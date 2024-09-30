#include<iostream>
using namespace std;
class complex
{
    int r,i;
    public:
    void accept();
    void  display()const;
    void add(const complex &,const complex &);

};
void complex ::accept()
{
    cout<<"enter value for rand i";
    cin>>this->r>>(*this).i;
}

void complex:: add(const complex&s, const complex &p)
{
    r=s.r+p.r;
    i=s.i+p.i;
}
void complex :: display()const{
    cout<<r<<"+i"<<i<<endl;
    complex t;
};
int main()
{
    complex c1,c2,c3;
    c1.accept();
    c2.accept();
    c3.add(c1,c2);
    c3.display();
}