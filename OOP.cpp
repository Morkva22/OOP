/*/

Завдання №2 Створіть клас Passport (паспорт), який буде містити паспортну інформацію про громадянина України.
За допомогою механізму успадкування, реалізуйте клас ForeignPassport (закордонний паспорт) похідний від Passport.
Нагадаємо, що закордонний паспорт містить крім паспортних даних, також дані про візи, номер закордонного паспорта.
/*/

#include <iostream>
#include <string>
using namespace std;

class Passport {
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

public:
    Passport(string name, string surname, string fathername, string date_of_brith, string place_of_birth, string date_of_issue, string date_of_expiry, string nationalitty, string RECO_number, string nubmer_document, string Authory)
        : name(name), surname(surname), fathername(fathername), date_of_birth(date_of_brith), place_of_birth(place_of_birth), date_of_issue(date_of_issue), date_of_expiry(date_of_expiry), nationalitty(nationalitty), RECO_number(RECO_number), nubmer_document(nubmer_document), Authory(Authory) {}

    string get_name() { return name; }
    string get_surname() { return surname; }
    string get_fathername() { return fathername; }
    string get_date_of_birth() { return date_of_birth; }
    string get_place_of_birth() { return place_of_birth; }
    string get_date_of_issue() { return date_of_issue; }
    string get_date_of_expiry() { return date_of_expiry; }
    string get_nationalitty() { return nationalitty; }
    string get_RECO_number() { return RECO_number; }
    string get_nubmer_document() { return nubmer_document; }
    string get_Authory() { return Authory; }

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

class ForeignPassport : public Passport {
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
        : Passport(name, surname, fathername, date_of_brith, place_of_birth, date_of_issue, date_of_expiry, nationalitty, RECO_number, nubmer_document, Authory),
        visa(visa), number_passport(number_passport), date_of_issue_passport(date_of_issue_passport), date_of_expiry_passport(date_of_expiry_passport), place_of_issue_passport(place_of_issue_passport), Authory_passport(Authory_passport) {}

    string get_visa() { return visa; }
    string get_number_passport() { return number_passport; }
    string get_date_of_issue_passport() { return date_of_issue_passport; }
    string get_date_of_expiry_passport() { return date_of_expiry_passport; }
    string get_place_of_issue_passport() { return place_of_issue_passport; }
    string get_Authory_passport() { return Authory_passport; }

    void set_visa(string visa) { this->visa = visa; }
    void set_number_passport(string number_passport) { this->number_passport = number_passport; }
    void set_date_of_issue_passport(string date_of_issue_passport) { this->date_of_issue_passport = date_of_issue_passport; }
    void set_date_of_expiry_passport(string date_of_expiry_passport) { this->date_of_expiry_passport = date_of_expiry_passport; }
    void set_place_of_issue_passport(string place_of_issue_passport) { this->place_of_issue_passport = place_of_issue_passport; }
    void set_Authory_passport(string Authory_passport) { this->Authory_passport = Authory_passport; }
};

void print_Passport(Passport passport) {
    cout << "Name: " << passport.get_name() << endl;
    cout << "Surname: " << passport.get_surname() << endl;
    cout << "Fathername: " << passport.get_fathername() << endl;
    cout << "Date of birth: " << passport.get_date_of_birth() << endl;
    cout << "Place of birth: " << passport.get_place_of_birth() << endl;
    cout << "Date of issue: " << passport.get_date_of_issue() << endl;
    cout << "Date of expiry: " << passport.get_date_of_expiry() << endl;
    cout << "Nationalitty: " << passport.get_nationalitty() << endl;
    cout << "RECO number: " << passport.get_RECO_number() << endl;
    cout << "Number document: " << passport.get_nubmer_document() << endl;
    cout << "Authory: " << passport.get_Authory() << endl;
}

void print_ForgeinPassport(ForeignPassport Fpassport) {
    print_Passport(Fpassport);
    cout << "Visa: " << Fpassport.get_visa() << endl;
    cout << "Number passport: " << Fpassport.get_number_passport() << endl;
    cout << "Date of issue passport: " << Fpassport.get_date_of_issue_passport() << endl;
    cout << "Date of expiry passport: " << Fpassport.get_date_of_expiry_passport() << endl;
    cout << "Place of issue passport: " << Fpassport.get_place_of_issue_passport() << endl;
    cout << "Authory passport: " << Fpassport.get_Authory_passport() << endl;
}

int main() {
    cout << "--------------------Passport--------------- " << endl;
    Passport p("Ivan", "Ivanov", "Ivanovich", "01.01.1990", "Kiev", "01.01.2010", "01.01.2020", "Ukrainian", "123456", "123456", "Kiev");
    print_Passport(p);

    cout << endl << endl;
    cout << "--------------------ForeignPassport--------------- " << endl;
    ForeignPassport fp("Ivan", "Ivanov", "Ivanovich", "01.01.1990", "Kiev", "01.01.2010", "01.01.2020", "Ukrainian", "123456", "123456", "Kiev",
        "USA", "123456", "01.01.2010", "01.01.2020", "Kiev", "Kiev");
    print_ForgeinPassport(fp);

    cout << endl << endl;
    return 0;
}