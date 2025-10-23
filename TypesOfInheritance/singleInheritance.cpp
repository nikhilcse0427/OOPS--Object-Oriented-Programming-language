#include<iostream>
using namespace std;

class Human{
  protected:
    string name;
    int age;
  
  public:
    Human(string name, int age){
      this->name = name;
      this->age = age;
    }

    ~Human(){
      cout<<"Base class destructor is called"<<endl;
    }
};

class Employee:private Human{
  string state;
  int salary;

  public:
  //first base class constructor is called then child class
  //reverse order for destructor
    Employee(string name, int age, string state, int salary):Human(name, age){
      // this->name = name;
      // this->age = age;
      this->state = state;
      this->salary = salary;
    }

    ~Employee(){
      cout<<"derived class destructor is called"<<endl;
    }

    void display(){
      cout<<"Employee detail: "<<name<<" "<<age<<" "<<state<<" "<<salary<<endl;
    }
};

int main(){
  Employee emp("Shri Ram", 28, "Uttar Pradesh", 88000);
  emp.display();
  return 0;
}