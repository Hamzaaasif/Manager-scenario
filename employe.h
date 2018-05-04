#include<iostream>
using namespace std;
class employe
{
public:
employe(string name,float salary)
{
  this->name = name;
  this->salary = salary;
}
friend ostream& operator <<(ostream& o ,const employe & e);
protected:
string name;
float salary;
};
ostream& operator <<(ostream& o ,const employe & e)
{
  return o<< "Name : "<<e.name <<endl << "Salary : " << e.salary<<endl;
};