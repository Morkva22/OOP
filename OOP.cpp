/*/
Використовуючи механізм множинного успадкування розробіть клас «Автомобіль».
Повинні бути класи «Колеса», «Двигун», «Двері» і т.д.
/*/ 

#include <iostream>
using namespace std;

class Wheels
{
public: Wheels(int wheels) : numberwheels(wheels) {}
    int getWheels() const
{
    return numberwheels;
}
protected: int numberwheels;
};

class Windows
{
public: Windows(int Windows) : numberWindows(Windows) {}
    int getWindows() const
{
    return numberWindows;
}
protected: int numberWindows;
};

class Doors
{
public: Doors(int Doors) : numberDoors(Doors) {}
    int getDoors() const
{
    return numberDoors;
}
protected: int numberDoors;
};

class Headlights
{
public: Headlights(int Headlights) : numberHeadlights(Headlights) {}
    int getHeadlights() const
{
    return numberHeadlights;
}
protected: int numberHeadlights;
};


class Mirrors{
public:
 Mirrors(int Mirror) : numberMirror(Mirror) {}
int getMirrors() const
{
    return numberMirror;
}
protected: int numberMirror;
};


class Engine {
public:
    Engine(int horsepower) : horsepower(horsepower) {}

    int getHorsepower() const {
        return horsepower;
    }

private:
    int horsepower;
};

class Car : public Wheels, public Windows, public Doors, public Headlights, public Mirrors, public Engine
{
public:
    Car(int wheels, int Windows, int Doors, int Headlights, int Mirror, int horsepower) :
    Wheels(wheels), Windows(Windows), Doors(Doors), Headlights(Headlights), Mirrors(Mirror), Engine(horsepower) {}

    void menu()
    {
        cout << "car with " << getWheels() << " wheels " << getWindows() << " windows " << getDoors() << " doors " << getHeadlights() << " headlights " << getMirrors() << " mirrors " << getHorsepower() << " horsepower " << endl;
    }
    };

int main()
{
    Car car(4, 4, 4, 2, 2, 200);
    car.menu();
    return 0;
}