/*/
Реалізувати структуру "Автомобіль" (довжина, кліренс (висота посадки),
об'єм двигуна, потужність двигуна, діаметр коліс, колір, тип коробки передач).
Створіть функції для задавання значень, відображення значень, пошуку значень.
/*/
#include <iostream>
using namespace std;

struct Car {
private:
    int length;
    int wheel;
    int year;
    double weight;
    double max_speed;
    double engine_power;
    double fuel_consumption;
    string color;
    string engine;
    string brand;
    enum fuelType {diesel, petrol, electric};
    fuelType fuel;
    enum gearboxType {automatic, manual};
    gearboxType gearbox;

public:
    Car(int length, int wheel, int year, double weight,
        double max_speed, double engine_power, double fuel_consumption,
        string color, string engine, string brand, string fuel, string gearbox)
    {
        setLength(length);
        setWheel(wheel);
        setYear(year);
        setWeight(weight);
        setMaxSpeed(max_speed);
        setEnginePower(engine_power);
        setFuelConsumption(fuel_consumption);
        setColor(color);
        setEngine(engine);
        setBrand(brand);
        setFuel(fuel);
        setgearbox(gearbox);
    }
    void setLength(int length )
    {
        if (length >= 0)
            this->length = length;
        else
            cout << "Error: length must be greater than 0" << endl;
    }
    void setWheel(int wheel)
    {
        if (wheel >= 0)
            this->wheel = wheel;
        else
            cout << "Error: wheel must be greater than 0" << endl;
    }
    void setYear(int year)
    {
        if (year >= 0)
            this->year = year;
        else
            cout << "Error: year must be greater than 0" << endl;
    }
    void setWeight(double weight)
    {
        if (weight >= 0)
            this->weight = weight;
        else
            cout << "Error: weight must be greater than 0" << endl;
    }
    void setMaxSpeed(double max_speed)
    {
        if (max_speed >= 0)
            this->max_speed = max_speed;
        else
            cout << "Error: max_speed must be greater than 0" << endl;
    }
    void setEnginePower(double engine_power)
    {
        if (engine_power >= 0)
            this->engine_power = engine_power;
        else
            cout << "Error: engine_power must be greater than 0" << endl;
    }
    void setFuelConsumption(double fuel_consumption)
    {
        if (fuel_consumption >= 0)
            this->fuel_consumption = fuel_consumption;
        else
            cout << "Error: fuel_consumption must be greater than 0" << endl;
    }
    void setColor(string color)
    {
        this->color = color;
    }
    void setEngine(string engine)
    {
        this->engine = engine;
    }
    void setBrand(string brand)
    {
        this->brand = brand;
    }
    void setFuel(string fuel)
    {
        if (fuel == "diesel")
            fuel = diesel;
        else if (fuel == "petrol")
            fuel = petrol;
        else if (fuel == "electric")
            fuel = electric;
    }
    void setgearbox (string gearboxStr)
    {
        if (gearboxStr == "automatic")
            gearbox = automatic;
        else if (gearboxStr == "manual")
            gearbox = manual;
    }

    int getLength(){return length;}
    int getWheel(){return wheel;}
    int getYear(){return year;}
    double getWeight(){return weight;}
    double getMaxSpeed(){return max_speed;}
    double getEnginePower(){return engine_power;}
    double getFuelConsumption(){return fuel_consumption;}
    string getColor(){return color;}
    string getEngine(){return engine;}
    string getBrand(){return brand;}
    string getFuel()
    {
        return (fuel == diesel) ? "diesel" : (fuel == petrol) ? "petrol" : "electric";
    }
    string getgearbox()
    {
        return (gearbox == automatic) ? "automatic" : "manual";
    }

    void search()
    {
        int choice;
        cout << "Enter the number of the parameter you want to search: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Length: " << getLength() << endl;
            break;
        case 2:
            cout << "Wheel: " << getWheel() << endl;
            break;
        case 3:
            cout << "Year: " << getYear() << endl;
            break;
        case 4:
            cout << "Weight: " << getWeight() << endl;
            break;
        case 5:
            cout << "Max Speed: " << getMaxSpeed() << endl;
            break;
        case 6:
            cout << "Engine Power: " << getEnginePower() << endl;
            break;
        case 7:
            cout << "Fuel Consumption: " << getFuelConsumption() << endl;
            break;
        case 8:
            cout << "Color: " << getColor() << endl;
            break;
        case 9:
            cout << "Engine: " << getEngine() << endl;
            break;
        case 10:
            cout << "Brand: " << getBrand() << endl;
            break;
        case 11:
            cout << "Gearbox: " << getgearbox() << endl;
            break;
        default:
            cout << "Error: invalid number" << endl;
            break;
        }
    }
    void menu2()
    {
        cout << "----------------Options--------------------" << endl;
        cout << "-------- Length              " << getLength() << " (m)  -------" <<  endl;
        cout << "-------- Wheel               " << getWheel() << " (dn) -------" <<endl;
        cout << "-------- Year                " << getYear() << " ---------" <<endl;
        cout << "-------- Weight              " << getWeight() <<" (kg )-----" << endl;
        cout << "-------- Max Speed           " << getMaxSpeed() << " (km/h) ---" <<endl;
        cout << "-------- Engine Power        " << getEnginePower() <<" (hp) -----" << endl;
        cout << "-------- Fuel Consumption    " << getFuelConsumption() <<" (l) --------" << endl;
        cout << "-------- Color               " << getColor() << " ----------" <<endl;
        cout << "-------- Engine              " << getEngine() << " -----------" <<endl;
        cout << "-------- Brand               " << getBrand() << " ----------" <<endl;
        cout << "-------- Fuel               " << getFuel() << " -------" <<endl;
        cout << "-------- Gearbox             " << getgearbox() << " ----" <<endl;
    }
    void ReSetings()
    {
        cout << endl << endl << endl;
        cout << "Resetting all options" << endl;
        setLength(1);
        setWheel(1);
        setYear(1);
        setWeight(1);
        setMaxSpeed(1);
        setEnginePower(1);
        setFuelConsumption(1);
        setColor("");
        setEngine("");
        setBrand("");
        setFuel("");
        setgearbox("");
        cout << endl<< endl<< endl;
        cout << "All options have been reset" << endl;
        cout << "Length: " << endl;
        cin >> length;
        cout << "Wheel: " << endl;
        cin >> wheel;
        cout << "Year: " << endl;
        cin >> year;
        cout << "Weight: " << endl;
        cin >> weight;
        cout << "Max Speed: " << endl;
        cin >> max_speed;
        cout << "Engine Power: " << endl;
        cin >> engine_power;
        cout << "Fuel Consumption: " << endl;
        cin >> fuel_consumption;
        cout << "Color: " << endl;
        cin >> color;
        cout << "Engine: " << endl;
        cin >> engine;
        cout << "Brand: " << endl;
        cin >> brand;
        string pfuel, pgearbox;
        cout << "Fuel( electric, petrol, diesel: " << endl;
        cin >> pfuel;
        setFuel(pfuel);
        cout << "Gearbox(manual, automatic): " << endl;
        cin >> pgearbox;
        setgearbox(pgearbox);
    }

    void menu()
    {
        cout << " --------Menu--------" << endl;
        cout << " 1. Options of Car" << endl;
        cout << " 2. Search" << endl;
        cout << " 3. Reset Car Options " << endl;
        cout << " 4. Exit" << endl;
    }
    void menu1()
    {
        int choice;
        do
        {
            menu();
            cout << "Enter the number of the option: ";
            cin >> choice;
            switch (choice)
            {
            case 1:
                menu2();
                break;
            case 2:
                search();
                break;
            case 3:
                ReSetings();
                break;
            case 4:
                cout << "Goodbye!" << endl;
                break;
            default:
                cout << "Error: invalid symbol" << endl;
                break;
            }
        } while (choice != 4);
}
};

int main()
{
    Car car(1, 1, 1, 1, 1, 1, 1, "red", "v1", "bmw", "diesel", "manual");
    car.setLength(3);
    car.setWheel(16);
    car.setYear(2020);
    car.setWeight(1200);
    car.setMaxSpeed(250);
    car.setEnginePower(170);
    car.setFuelConsumption(30.0);
    car.setColor("black");
    car.setEngine("V8");
    car.setBrand("BMW");
    car.setFuel("petrol");
    car.setgearbox("automatic");

    car.menu2();
    car.menu1();

    return 0;
}
    
    





