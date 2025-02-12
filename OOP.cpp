/*/
Додати в уже існуючий проект багатоквартирного
будинку з класу «Будинок», «Квартира», «Людина» кон-
структор переміщення в ті класи, де це необхідно. Пам’ять
під поля класу виділяти динамічно
 /*/

#include <iostream>
#include <string>
using namespace std;

class Human
{
    int* age;
    string* name;
    string* surname;

public:
    Human(int age, string name, string surname)
        : age(new int(age)), name(new string(name)), surname(new string(surname)) {}

    Human(Human&& other)
        : age(other.age), name(other.name), surname(other.surname)
    {
        other.age = nullptr;
        other.name = nullptr;
        other.surname = nullptr;
    }

    ~Human()
    {
        delete age;
        delete name;
        delete surname;
    }

    int getAge() const { return *age; }
    string getName() const { return *name; }
    string getSurname() const { return *surname; }
    void print_Human()
    {
        cout << "Age: " << getAge() << endl;
        cout << "Name: " << getName() << endl;
        cout << "Surname: " << getSurname() << endl;
    }
};

class House
{
protected:
    int* floar;
    string* adres;
    int* countOfApartament;
    int* countOfPeople;
    string* owner;

public:
    House(int floar, string adres, int countOfApartament, int countOfPeople, string owner)
        : floar(new int(floar)), adres(new string(adres)), countOfApartament(new int(countOfApartament)), countOfPeople(new int(countOfPeople)), owner(new string(owner)) {}

    House(House&& other)
        : floar(other.floar), adres(other.adres), countOfApartament(other.countOfApartament), countOfPeople(other.countOfPeople), owner(other.owner)
    {
        other.floar = nullptr;
        other.adres = nullptr;
        other.countOfApartament = nullptr;
        other.countOfPeople = nullptr;
        other.owner = nullptr;
    }

    ~House()
    {
        delete floar;
        delete adres;
        delete countOfApartament;
        delete countOfPeople;
        delete owner;
    }

    void print_House()
    {
        cout << "Floar: " << *floar << endl;
        cout << "Adres: " << *adres << endl;
        cout << "Count of Apartament: " << *countOfApartament << endl;
        cout << "Count of People: " << *countOfPeople << endl;
        cout << "Owner: " << *owner << endl;
    }
};

class Apartament : public House
{
    int* number;

public:
    Apartament(int floar, int countOfRooms, string owner, string address, int countOfPeople)
        : House(floar, address, countOfRooms, 0, owner), number(new int(2)) {}

    Apartament(Apartament&& other)
    : House(*other.floar, *other.adres, *other.countOfApartament, *other.countOfPeople, *other.owner), number(new int(0))
    {
        other.number = nullptr;
    }

    ~Apartament()
    {
        delete number;
    }

    void print_Apartament()
    {
        cout << "Floar: " << *floar << endl;
        cout << "Adres: " << *adres << endl;
        cout << "Count of Apartament: " << *countOfApartament << endl;
        cout << "Count of People: " << *countOfPeople << endl;
        cout << "Owner: " << *owner << endl;
        cout << "Number of people: " << *countOfPeople << endl;
        cout << "Number: " << *number << endl;
    }
};

int main()
{
    cout << "Human 1:-------------------------------- " << endl;
    Human human1(20, "Ivan", "Ivanov");
    human1.print_Human();
    cout << endl << endl;
    cout << "Human 2 copy:----------------------------------- " << endl;
    Human human2 = move(human1);
    human2.print_Human();
    cout << endl << endl;
    cout << "House 1:-------------------------------- " << endl;
    House house1(5, "Kiev", 10, 20, "Ivanov");
    house1.print_House();
    cout << endl << endl;
    cout << "House 2 copy:----------------------------------- " << endl;
    House house2 = move(house1);
    house2.print_House();
    cout << endl << endl;
    cout << "Apartament 1:----------------------------------- " << endl;
    Apartament apartament1(5, 3, "Ivanov", "Kiev", 4);
    apartament1.print_Apartament();
    cout << endl << endl;
    cout << "Apartament 2 copy:----------------------------------- " << endl;
    Apartament apartament2 = move(apartament1);
    apartament2.print_Apartament();
    
    
    return 0;
    
}