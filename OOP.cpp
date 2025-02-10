/*/

Завдання №2 Створіть клас Passport (паспорт), який буде містити паспортну інформацію про громадянина України.
За допомогою механізму успадкування, реалізуйте клас ForeignPassport (закордонний паспорт) похідний від Passport.
Нагадаємо, що закордонний паспорт містить крім паспортних даних, також дані про візи, номер закордонного паспорта.
/*/

#include <iostream>
using namespace std;


class Passport
{
    string name;
    string surname;
    string fathername;
    string date_of_birth;
    string place_of_birth;
    string date_of_issue;
    string date_of_expiry;
    string nationalitty;
    string RECO_number;
    string nubmer_document;
    string Authory;
};




class ForeignPassport : public Passport
{
public:
    string visa;
    string number_passport;
    string date_of_issue_passport;
    string date_of_expiry_passport;
    string place_of_issue_passport;
    string Authory_passport;
private:
    
};