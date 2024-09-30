//c++ program to arrange n number of objects based on real values 
#include<iostream>
#include<string.h>
using namespace std;
class complex
{
        int r, i;
    public:
        void accept();
        int compare(const complex &)const;
        void display()const;

};
void complex::accept()
{
    cout<<"Enter r and i values : ";
    cin>>r>>i;
}

int complex::compare(const complex &c)const
{
    if (r < c.r)
        return 0;
    return 1;
}

void complex::display()const
{
    if (i>0)
        cout<<r<<" + i"<<i<<endl;
    else if (i<0)
        cout<<r<<" - i"<<-1*i<<endl;
    else
        cout<<r<<endl;
}
int main(){
    int n;
    cout<<"Enter the no. of complex numbers : ";
    cin>>n;
    complex *c = NULL;
    c = new complex[n];
    for(int i = 0 ; i < n ; c[i++].accept());

    for(int i = 0 ; i < n-1; i++)
        for(int j = i+1 ; j < n ; j++)
            if(c[i].compare(c[j])){
                complex tmp = c[i];
                c[i] = c[j];
                c[j] = tmp;
            }

    cout<<"\nAfter sorting :\n"<<endl;

    for(int i = 0 ; i < n ; c[i++].display());
    delete []c;
    return 0;
}
