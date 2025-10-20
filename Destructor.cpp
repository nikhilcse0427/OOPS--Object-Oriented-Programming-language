#include<iostream>
using namespace std;

class Customer{
  public:
    string name;
    int *bill;

    Customer(){
      this->name = "4";
      cout<<"Contructor is callled: "<<name<<endl;
    }
    Customer(string name){
      this->name = name;
      bill = new int;
      *bill = 10;
      cout<<"constructor is called: "<<name<<endl;
    }

    ~Customer(){
      cout<<"Dconstructor is called: "<<name<<endl;
    }
};

int main(){
  Customer A1("1"), A2("2"), A3("3");
  Customer *A4 = new Customer;
  delete A4;

  return 0;
}

