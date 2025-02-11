/*/
Завдання №3 Створити абстрактний базовий клас «Транспортний засіб» і похідні класи «Автомобіль», «Велосипед», «Віз».
Підрахувати час і вартість перевезення пасажирів і вантажів кожним транспортним засобом.
 /*/
#include <iostream>
using namespace std;

class Transport
{
protected:
    double weight;
    double speed = 0;
    double distance;
    int passengers;
    double costPerKm;
    double costPerKg;
    
    public:
    Transport(double weight, double speed, double distance, int passengers, double costPerKm, double costPerKg)
         : weight(weight), speed(speed), distance(distance), passengers(passengers), costPerKm(costPerKm), costPerKg(costPerKg) {}
    
    virtual void CountTime() = 0;
    virtual void CountCost() = 0;
};

class Car : public Transport
{
public:Car(double weight, double speed, double distance, int passengers, double costPerKm, double costPerKg)
        : Transport(weight, speed, distance, passengers, costPerKm, costPerKg) {}
    
    void CountTime() override
    {
    double time = distance / speed;
    cout << "Car transport time: " << time << " hours" << endl;
   }
    void CountCost() override {
    double cost = (distance * costPerKm) + (weight * costPerKg);
    cout << "Car transport cost: $" << cost << endl;
  }
};



class Bicycle : public Transport
{
public:Bicycle(double weight, double speed, double distance, int passengers, double costPerKm, double costPerKg)
        : Transport(weight, speed, distance, passengers, costPerKm, costPerKg) {}
    void CountTime() override
    {
    double time = distance / speed;
    cout << "Bicycle transport time: " << time << " hours" << endl;
    }

    void CountCost() override
    {
    double cost = (distance * costPerKm) + (weight * costPerKg);
    cout << "Bicycle transport cost: $" << cost << endl;
    }
};



class Cart : public Transport
{
public:Cart(double weight, double speed, double distance, int passengers, double costPerKm, double costPerKg)
        : Transport(weight, speed, distance, passengers, costPerKm, costPerKg) {}

    void CountTime() override
    {
    double time = distance / speed;
    cout << "Cart transport time: " << time << " hours" << endl;
    }

    void CountCost() override
    {
    double cost = (distance * costPerKm) + (weight * costPerKg);
    cout << "Cart transport cost: $" << cost << endl;
    }
};




int main() {
    cout<< "car" << endl;
    Car car(500, 60, 100, 4, 0.5, 0.1);
    car.CountTime();
    car.CountCost();
 cout << endl<<endl;
    cout << "bicycle" << endl;
    Bicycle bicycle(20, 15, 10, 1, 0.1, 0.05);
    bicycle.CountTime();
    bicycle.CountCost();

    cout << endl<<endl;
    cout << "cart" << endl;
    Cart cart(200, 10, 50, 2, 0.3, 0.2);
    cart.CountTime();
    cart.CountCost();

    return 0;
}