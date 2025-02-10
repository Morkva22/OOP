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
    
 void get_name() { cout << name << endl; }
    void get_surname() { cout << surname << endl; }
    void get_fathername() { cout << fathername << endl; }
    void get_date_of_birth() { cout << date_of_birth << endl; }
    void get_place_of_birth() { cout << place_of_birth << endl; }
    void get_date_of_issue() { cout << date_of_issue << endl; }
    void get_date_of_expiry() { cout << date_of_expiry << endl; }
    void get_nationalitty() { cout << nationalitty << endl; }
    void get_RECO_number() { cout << RECO_number << endl; }
    void get_nubmer_document() { cout << nubmer_document << endl; }
    void get_Authory() { cout << Authory << endl; }

    void set_name(string name) { this->name = name; }
    void set_surname(string surname) { this->surname = surname; }
    void set_fathername(string fathername) { this->fathername = fathername; }
    void set_date_of_birth(string date_of_birth) { this->date_of_birth = date_of_birth; }
    void set_place_of_birth(string place_of_birth) { this->place_of_birth = place_of_birth; }
    void set_date_of_issue(string date_of_issue) { this->date_of_issue = date_of_issue; }
    void set_date_of_expiry(string date_of_expiry) { this->date_of_expiry = date_of_expiry; }
    void set_nationalitty(string nationalitty) { this->nationalitty = nationalitty; }
    void set_RECO_number(string RECO_number) { this->RECO_number = RECO_number; }
    void set_nubmer_document(string nubmer_document) { this->nubmer_document = nubmer_document; }
    void set_Authory(string Authory) { this->Authory = Authory; }
    
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
    ForeignPassport(string name, string surname, string fathername, string date_of_brith, string place_of_birth, string date_of_issue, string date_of_expiry, string nationalitty, string RECO_number, string nubmer_document, string Authory,
        string visa, string number_passport, string date_of_issue_passport, string date_of_expiry_passport, string place_of_issue_passport, string Authory_passport)
        :Passport(name, surname, fathername, date_of_brith, place_of_birth, date_of_issue, date_of_expiry, nationalitty, RECO_number, nubmer_document, Authory),
        visa(visa), number_passport(number_passport), date_of_issue_passport(date_of_issue_passport), date_of_expiry_passport(date_of_expiry_passport), place_of_issue_passport(place_of_issue_passport), Authory_passport(Authory_passport) {}


    void get_visa() { cout << visa << endl; }
    void get_number_passport() { cout << number_passport << endl; }
    void get_date_of_issue_passport() { cout << date_of_issue_passport << endl; }
    void get_date_of_expiry_passport() { cout << date_of_expiry_passport << endl; }
    void get_place_of_issue_passport() { cout << place_of_issue_passport << endl; }
    void get_Authory_passport() { cout << Authory_passport << endl; }


    void set_visa(string visa) { this->visa = visa; }
    void set_number_passport(string number_passport) { this->number_passport = number_passport; }
    void set_date_of_issue_passport(string date_of_issue_passport) { this->date_of_issue_passport = date_of_issue_passport; }
    void set_date_of_expiry_passport(string date_of_expiry_passport) { this->date_of_expiry_passport = date_of_expiry_passport; }
    void set_place_of_issue_passport(string place_of_issue_passport) { this->place_of_issue_passport = place_of_issue_passport; }
    void set_Authory_passport(string Authory_passport) { this->Authory_passport = Authory_passport; }
};

int main()
{
    cout << "--------------------Passport--------------- "<< endl;
    Passport p("Ivan", "Ivanov", "Ivanovich", "01.01.1990", "Kiev", "01.01.2010", "01.01.2020", "Ukrainian", "123456", "123456", "Kiev");
cout << endl<< endl;
    cout << "--------------------ForeignPassport--------------- " << endl;
    ForeignPassport fp("Ivan", "Ivanov", "Ivanovich", "01.01.1990", "Kiev", "01.01.2010", "01.01.2020", "Ukrainian", "123456", "123456", "Kiev",
        "USA", "123456", "01.01.2010", "01.01.2020", "Kiev", "Kiev");
    cout << endl << endl;
    return 0;
}
