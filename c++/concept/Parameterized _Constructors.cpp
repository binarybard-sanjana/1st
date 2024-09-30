 //Parameterized Constructors
 #include <iostream>
 #include<string.h>
using namespace std;
class employee {
char n[20],eid[12];float sal;
public:
employee(char*,char*,float);
void print()const;
};

employee::employee(char *n,char *e,float f)//Parameterized Constructors is inkoved implicitly
{
    //n holds the base address os abc
    //e holds the base address of sal
    //f holds value as 100.0
    strcpy(this->n,n);
    strcpy(eid,e);
    sal =f;// The line sal = f; simply assigns the value of f (which is the salary passed to the constructor) to the class member sal.
    cout<<"in pc\n";
}
void employee::print() const {
    cout << "Name: " << n << endl;
    cout << "Employee ID: " << eid << endl;
    cout << "Salary: " << sal << endl; // Access the member variable sal
}
int main()
{
    employee e1("abc","123",100.0);
    e1.print();
return 0; }