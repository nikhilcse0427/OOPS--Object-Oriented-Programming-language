#include<iostream>
using namespace std;

int main(){
  try{
    int *p = new int[10000000000];
    cout<<"Memory allocated successfully\n";
    delete[]p;
  }catch(const exception &e){
    cout<<"Error: "<<e.what();
  }
  return 0;
}