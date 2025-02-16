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
    //той самий noexpect, не розумію навіщо копілот його сюди вписав, хоча без нього все працює---------------------------------
    Human(const Human& other) noexcept
    //той самий noexpect, не розумію навіщо копілот його сюди вписав  хоча без нього все працює---------------------------------
        : age(new int (*other.age)),name(new string(*other.name)), surname(new string(*other.surname)){}

    virtual ~Human()
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
    House(const House& other)
        : floar(new int(*other.floar)), adres(new string(*other.adres)), countOfApartament(new int(*other.countOfApartament)), countOfPeople(new int(*other.countOfPeople)), owner(new string(*other.owner)) {}
    
    virtual ~House()
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
        : House(floar, address, countOfRooms, countOfPeople, owner), number(new int(2)) {}

    Apartament(const Apartament& other)
        : House(0, "", 0, 0, ""), number(new int(0)) 
    {
        *floar = 0;
        *adres = "";
        *countOfApartament = 0;
        *countOfPeople = 0;
        *owner = "";
    }

    virtual ~Apartament()
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
    Human human2 = Human(0, "", "");
    human2.print_Human();
    cout << endl << endl;
    cout << "House 1:-------------------------------- " << endl;
    House house1(5, "Kiev", 10, 20, "Ivanov");
    house1.print_House();
    cout << endl << endl;
    cout << "House 2 copy:----------------------------------- " << endl;
    House house2 = House(0, "", 0, 0, "");
    house2.print_House();
    cout << endl << endl;
    cout << "Apartament 1:----------------------------------- " << endl;
    Apartament apartament1(5, 3, "Ivanov", "Kiev", 4);
    apartament1.print_Apartament();
    cout << endl << endl;
    cout << "Apartament 2 copy:----------------------------------- " << endl;
    Apartament apartament2 = Apartament(apartament1);
    apartament2.print_Apartament();

    return 0;
}