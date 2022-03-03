#include <iostream>
using namespace std;
class student
{
public:
string name;
int roll;
float fees=10000;


};
class school: public student
{
  public:
float additional_fees=1000;

};

int main() {
  student s1;
  school l1;
  cout<<l1.fees;
  cout<<l1.additional_fees;
  return  0;

 // std::cout << "Hello World!\n";
} 