#include<bits/stdc++.h>
using namespace std;

class Customer{
  public: 
    string name;  // if we have not initialized any value to string datatatype variable variable will automaticlly initialized with ""
    long long accountNum; // If not initialized -> automatically initalized with garbage value for integer datatype and each time will give differenct garbage value
    long long balance;

    //default constructor
    Customer(){
      name = "xyz";
      accountNum = 11111111;
      balance = 0;
    }

    //parametrized constructor
    Customer(string name1, long long accountNum1){
      name = name1;
      accountNum = accountNum1;
    }

    Customer(string name, long long accountNum, long long balance){
      this->name = name;
      this->accountNum = accountNum;
      this->balance = balance;
    }

    //copy constructor
    Customer(Customer &custom){
      this->name = custom.name;
      this->accountNum = custom.accountNum;
      this->balance = custom.balance;
    }
};

int main(){
  Customer custm1;
  cout<<custm1.name<<endl; //""
  cout<<custm1.balance<<endl;// garbage value
  cout<<custm1.accountNum<<endl;// garbage value

  Customer custom2("Nikhil Verma", 1237504662, 854137891);
  cout<<custom2.name<<endl;
  cout<<custom2.balance<<endl;
  cout<<custom2.accountNum;
  cout<<endl;
  
  cout<<"Copy constructor called:-"<<endl;
  Customer custom3(custom2);
  // Customer = custom3 = custom2;
  cout<<custom3.name<<endl;
  cout<<custom3.balance<<endl;
  cout<<custom3.accountNum;



  return 0;
}