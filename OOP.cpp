/*/

Завдання №2 Створіть клас Passport (паспорт), який буде містити паспортну інформацію про громадянина України.
За допомогою механізму успадкування, реалізуйте клас ForeignPassport (закордонний паспорт) похідний від Passport.
Нагадаємо, що закордонний паспорт містить крім паспортних даних, також дані про візи, номер закордонного паспорта.
/*/

#include <iostream>
using namespace std;


class Passport
{
private:
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
public: Passport(string name, string surname,string fathername, string date_of_brith,string place_of_birth, string date_of_issue,string date_of_expiry,string nationalitty,string RECO_number,string nubmer_document,string Authory)
    :name(name),surname(surname),fathername(fathername),date_of_birth(date_of_brith),place_of_birth(place_of_birth),date_of_issue(date_of_issue),
    date_of_expiry(date_of_expiry),nationalitty(nationalitty),RECO_number(RECO_number),nubmer_document(nubmer_document),Authory(Authory) {}
    

};




class ForeignPassport : public Passport
{
private:
    string visa;
    string number_passport;
    string date_of_issue_passport;
    string date_of_expiry_passport;
    string place_of_issue_passport;
    string Authory_passport;
public:
    
};