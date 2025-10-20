#include<iostream>
using namespace std;

class Cricketers{
  private:
    long long phoneNum; //8 byte
    string address; 

  public:
    string name;
    int age;
    int salary;
    string nationality;
    char grade;//it takes 1 byte but because of padding rest 7 will be filled by padding

    void setPhoneNum(long long phone_num){
      phoneNum = phone_num;
    }

    void setAddress(string add){
      address = add;
    }

    long long getPhoneNum(){
      return phoneNum;
    }

    string getAddress(){
      return address;
    }
};

int main(){
  // size of object defined by class size not by individual object size 
  Cricketers Player1; // create and variable player1 having data-type Cricketers
  //  Since I have 64-bit compiler so it will take it will read in block of 8-bits and here string will take 32-bit each this is padding. 
  cout<<"size of one object of class Cricketers: "<<sizeof(Player1)<<endl;  
  Player1.name = "Rohit Sharma";
  Player1.age = 38;
  Player1.salary = 78000;
  Player1.nationality = "Indian";
  Player1.setPhoneNum(8757848658);
  int phNum = Player1.getPhoneNum();
  Player1.setAddress("Bhagalpur-Bihar-India");

  // setter & getter
  cout << "Player1: " << Player1.name << ", Age: " << Player1.age << ", Salary: " << Player1.salary << ", Nationality: " << Player1.nationality <<", Phone-num: " <<Player1.getPhoneNum() <<", Player1 address: " <<Player1.getAddress()<<endl;

  return 0;
}