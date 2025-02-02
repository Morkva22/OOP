/*/

/*/
#include <iostream>
#include <string>
using namespace std;

struct Address {
    string city;
    string street;
    int number;
};

struct Person {
    string name;
    int age;
    Address address;
};

int main() {
    Person person;
    person.name = "Vlad";
    person.age = 28;
    
    person.address.city = "lviv";
    person.address.street = "magistratska";
    person.address.number = 22;
    
    cout << "name: " << person.name << endl;
    cout << "yo: " << person.age << endl;
    cout << "adress: " 
         << person.address.city << ", " 
         << person.address.street << " " 
         << person.address.number << endl;

    return 0;
}
