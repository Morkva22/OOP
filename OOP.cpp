/*/
Завдання №3 Створити абстрактний базовий клас «Транспортний засіб» і похідні класи «Автомобіль», «Велосипед», «Віз».
Підрахувати час і вартість перевезення пасажирів і вантажів кожним транспортним засобом.
 /*/
#include <iostream>
using namespace std;

class Transport abstract
{
 private:
    double weight;
    double speed = 0;
    double cost;
    double time;
    double distance;
    int passengers;
    double costPerKm;
    double timePerKm;
    double costPerKg;
    double timePerKg;
    double costPerWeight;
    double timePerWeight;
    
    public:
    virtual void CountTime() = 0;
    virtual void CountCost() = 0;
    
};

class Car : public Transport
{
private:
public:
};
class Bicycle : public Transport
{
private:
public:
};
class Cart : public Transport
{
private:
public:
};

int main()
{
    return 0;
}