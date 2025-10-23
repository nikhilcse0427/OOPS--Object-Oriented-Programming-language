#include<iostream>
#include<vector>
using namespace std;

class Animal{
  public:
    virtual void speak(){
      cout<<"huhu\n";
    }
};

class Dog:public Animal{
  public:
    void speak(){
      cout<<"bark\n";
    }
    void roti(){
      cout<<"hello\n";
    }
};

class Cat:public Animal{
  public:
    void speak(){
      cout<<"meuw\n";
    }
    void roti(){
      cout<<"hello\n";
    }
};

int main(){
  // Animal *p;
  // p = new Dog();
  // p->speak();

  // Dog d1;
  // d1.speak();
  Animal *p;
  vector<Animal*> animals;
  animals.push_back(new Dog());
  animals.push_back(new Cat());
  animals.push_back(new Animal());
  animals.push_back(new Dog());
  animals.push_back(new Cat());
  animals.push_back(new Animal());

  for(int i=0;i<animals.size();i++){
    p = animals[i];
    p->speak();
  }
  return 0;
}