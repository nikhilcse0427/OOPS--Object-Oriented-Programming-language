#include<iostream>
using namespace std;

class Customer{
  string name;
  int account_number, balance;

  public:
    Customer(string name, int account_number, int balance){
      this->name = name;
      this->account_number = account_number;
      this->balance = balance;
    }

    void deposit(int money){
      if(money < 0){
        throw "deposit to be money is less than 0\n";
      }
      balance += money;
      cout<<"Money is successfully deposited\n";
    }

    void withdraw(int money){
      if(money < 0 || money>balance){
        throw "please select valid money to withdraw\n";
      }
      balance -= money;
      cout<<"Money is successfully withdrawn\n";
    }
};

int main(){
  Customer c1("Rohit", 11111, 10000);
  Customer c2("Sonu", 22222, 20000);
  try{
    c1.deposit(50000);
    c2.withdraw(15000);
    c1.withdraw(-2000);
    c2.deposit(50000);
  }catch(const char *error){
    cout<<"Exception occured is: "<<error;
  }

  return 0;
}