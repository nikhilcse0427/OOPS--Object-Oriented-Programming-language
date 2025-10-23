// Problem statement
//SBI -> Customer class contain name, balance, withdraw money method, display user details
// Sbi can track total number of customers
// total balance available

#include<iostream>
using namespace std;

class Customer{
  private:
    string name;
    int age, deposit;
    static int totalCustomers; // declaration
    static int totalBalance;

  public:
    Customer(string name, int age, int deposit){
      this->name = name;
      this->age = age;
      this->deposit = deposit;
      totalCustomers++;
      totalBalance += deposit;
    }

    static int bankBalance(){
      return totalBalance;
    }

    void display(){
      cout<<name<<" "<<age<<" "<<deposit<<" "<<totalCustomers<<endl;
    }

};

int Customer::totalCustomers = 0; //defination
int Customer::totalBalance = 0;

int main(){
    Customer custom1("Rohit Sharma", 38, 78000);
    Customer custom2("Virat Kohli", 35, 95000);
    Customer custom3("MS Dhoni", 42, 85000);
    Customer custom4("KL Rahul", 31, 65000);
    Customer custom5("Shubman Gill", 24, 45000);
    Customer custom6("Hardik Pandya", 30, 55000);

    custom1.display();
    custom2.display();
    custom3.display();
    custom4.display();
    custom5.display();
    custom6.display();
    cout << "Total Bank Balance: " << Customer::bankBalance() << endl;


  return 0;
}