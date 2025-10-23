#include<iostream>
using namespace std;

class Human{
  protected:
    string name, religion, state;
    int age;
};

class Student : private Human{
  private:
    int fees;
    string standard, grade;

    public:
      Student(string name, string religion, string state, int age, int fees, string standard, string grade){
        this->name = name;
        this->religion = religion;
        this->state = state;
        this->age = age;
        this->fees = fees;
        this->standard = standard;
        this->grade = grade;
      }
      
        void display_student(){
          cout<<"Student details: "<<name<<" "<<religion<<" "<<state<<" "<<age<<" "<<fees<<" "<<standard<<" "<<grade<<endl;
        }
};

class Teacher : protected Human{
  private:
    int salary;
    string qualification;

    public:
      Teacher(string name, string religion, string state, int age, int salary, string qualification){
        this->name = name;
        this->religion = religion;
        this->state = state;
        this->age = age;
        this->salary = salary;
        this->qualification = qualification;
      }

      void display_teacher(){
        cout<<"Teacher details: "<<name<<" "<<religion<<" "<<state<<" "<<age<<" "<<salary<<" "<<qualification<<endl;
      }
};

int main(){
  Student st1("Mohit Sharma", "Hindu", "Bihar", 22, 1500, "std-8", "A+");
  st1.display_student();

  Teacher t1("Rohan Kumar", "Hindu", "Bihar", 38, 78000, "Ms");
  t1.display_teacher();
  return 0;
}