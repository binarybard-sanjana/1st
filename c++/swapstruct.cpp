//Structure in c++
#include <iostream>
using namespace std;
void accept(struct student s1);
void display(struct student s1);
struct student
{
 char name[10]; char branch[10]; int usn;
};
//typedef struct student d;
int main( )
{
 struct student s1 ,*P;
// s1; // s1 is a variable of type struct student
p=&s1;
  accept(&s1);
  display(&s1);
return 0;
}
void accept(struct student *p)
{
    cout<<"Enter the details of a student\n";
    cin >>(*p.name) >>(*p.branch) >>(*p.usn);
}
void display(struct student p)
{
cout<<"the details of student is :\n";
cout <<(*P).name << endl <<s1.branch << endl << s1.usn;
}