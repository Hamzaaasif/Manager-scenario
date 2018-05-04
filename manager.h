#include<iostream>
using namespace std;
#include "employe.h"
class manager : public employe
{
  public:
  manager(int l,string name) : employe(name , (l*10000))
  {
    this->level = l ;
  }
  friend ostream& operator &&(ostream& o ,const manager & m);
  private:
  int level;
};
ostream& operator &&(ostream& o ,const manager & m)
{
  return o << m << "at level : " << m.level << endl;
};