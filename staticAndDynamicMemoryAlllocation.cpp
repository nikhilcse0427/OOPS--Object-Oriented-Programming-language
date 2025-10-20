#include<iostream>
using namespace std;

class Student{
  public:
    string name;
    int age;
};
int main(){
  Student *st1 = new Student(); // Dynamic memory allocation
  (*st1).name = "Rohit Sharma";
  st1->age = 38; // (*st1.) and st1-> are same

  cout<<"Size of student class object: "<<sizeof(*st1)<<endl;  // 40 bytes if used sizeof(st1) it will point to address so it will giv 8 bytes
  cout<<"student1 name: "<<st1->name<<", student1 age: "<<st1->age<<endl;

  return 0;
}