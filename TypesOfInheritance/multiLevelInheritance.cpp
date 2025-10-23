// Vehicle → Car → ElectricCar
// Create a multilevel inheritance example where:
// Vehicle stores brand and model.
// Car adds fuel type and number of seats.
// ElectricCar adds battery capacity and charging time.
// Show all details using appropriate member functions.

#include<iostream>
using namespace std;

class Vehicle{
  protected:
    string brand, model;

    public:
      Vehicle(string brand, string model){
        this->brand = brand;
        this->model = model;
      }
};

class Car:protected Vehicle{
  protected:
    string fuelType;
    int numOfSeats;

    public:
      Car(string brand, string model, string fuelType, int numOfSeats):Vehicle(brand, model){
        this->fuelType = fuelType;
        this->numOfSeats = numOfSeats;
      }
};

class ElectricCar:private Car{
  private:
    string batterCapacity;
    int chargingTime;

    public:
      ElectricCar(string brand, string model, string fuelType, int numOfSeats, string batterCapacity, int chargingTime):Car(brand, model, fuelType, numOfSeats){ //first will check parent constructor when parameter come from constructor call
        this->batterCapacity = batterCapacity;
        this->chargingTime = chargingTime;
      }

      void display(){
        cout<<brand<<" "<<model<<" "<<fuelType<<" "<<numOfSeats<<" "<<batterCapacity<<" "<<chargingTime;
      }
};

int main(){
  ElectricCar e("Tesla", "Model S", "Electric", 5, "100 kWh", 30);
  e.display();
  return 0;
}