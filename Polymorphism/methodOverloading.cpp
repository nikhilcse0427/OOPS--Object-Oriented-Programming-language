#include<iostream>
using namespace std;

class Area{
  public:
    void area(int r){
      cout<<"Area of circle: "<<3.14*r*r<<endl;
    }
    void area(double l, double b){
      cout<<"Area of rectangle: "<<l*b<<endl;
    }
    void area(int l, int b){
      cout<<"area of square: "<<l*b<<endl;
    }
};

int main(){
  Area a1;
  a1.area(2.4);
  a1.area(2.4, 8.8);
  a1.area(4, 4);

  return 0;
}