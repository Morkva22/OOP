#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    Student(string name, string surname, int age, string name_specialty, string group, double average_mark, string full_name_teacher)
        : name(new string(name)), surname(new string(surname)), age(new int(age)), name_specialty(new string(name_specialty)), group(new string(group)), average_mark(new double(average_mark)), full_name_teacher(new string(full_name_teacher)) {}
    
    string get_name() { return *name; }
    string get_surname() { return *surname; }
    int get_age() { return *age; }
    string get_name_specialty() { return *name_specialty; }
    string get_group() { return *group; }
    double get_average_mark() { return *average_mark; }
    string get_full_name_teacher() { return *full_name_teacher; }
    
    void set_name(string name) { *(this->name) = name; }
    void set_surname(string surname) { *(this->surname) = surname; }
    void set_age(int age) { *(this->age) = age; }
    void set_name_specialty(string name_specialty) { *(this->name_specialty) = name_specialty; }
    void set_group(string group) { *(this->group) = group; }
    void set_average_mark(double average_mark) { *(this->average_mark) = average_mark; }
    void set_full_name_teacher(string full_name_teacher) { *(this->full_name_teacher) = full_name_teacher; }

    Student(const Student& other) 
    {
        this->name = new string(*other.name);
        this->surname = new string(*other.surname);
        this->age = new int(*other.age);
        this->name_specialty = new string(*other.name_specialty);
        this->group = new string(*other.group);
        this->average_mark = new double(*other.average_mark);
        this->full_name_teacher = new string(*other.full_name_teacher);
    }

    Student(Student&& other) 
    {
        this->name = other.name;
        this->surname = other.surname;
        this->age = other.age;
        this->name_specialty = other.name_specialty;
        this->group = other.group;
        this->average_mark = other.average_mark;
        this->full_name_teacher = other.full_name_teacher;

        other.name = nullptr;
        other.surname = nullptr;
        other.age = nullptr;
        other.name_specialty = nullptr;
        other.group = nullptr;
        other.average_mark = nullptr;
        other.full_name_teacher = nullptr;
    }

    ~Student()
    {
        delete name;
        delete surname;
        delete age;
        delete name_specialty;
        delete group;
        delete average_mark;
        delete full_name_teacher;
    }

private:
    string* name;
    string* surname;
    int* age;
    string* name_specialty;
    string* group;
    double* average_mark;
    string* full_name_teacher;
};

class Aspirant : public Student
{
private:
    string* name_dissertation;
    string* name_supervisor;
    string* name_faculty;
    string* name_university;
    string* name_cathedra;

public:
    Aspirant(string name, string surname, int age, string name_specialty, string group, double average_mark, string full_name_teacher,
             string name_dissertation, string name_supervisor, string name_faculty, string name_university, string name_cathedra)
        : Student(name, surname, age, name_specialty, group, average_mark, full_name_teacher)
    {
        this->name_dissertation = new string(name_dissertation);
        this->name_supervisor = new string(name_supervisor);
        this->name_faculty = new string(name_faculty);
        this->name_university = new string(name_university);
        this->name_cathedra = new string(name_cathedra);
    }

    Aspirant(const Aspirant& other) : Student(other)
    {
        this->name_dissertation = new string(*other.name_dissertation);
        this->name_supervisor = new string(*other.name_supervisor);
        this->name_faculty = new string(*other.name_faculty);
        this->name_university = new string(*other.name_university);
        this->name_cathedra = new string(*other.name_cathedra);
    }

    Aspirant(Aspirant&& other) : Student(other)
    {
        this->name_dissertation = other.name_dissertation;
        this->name_supervisor = other.name_supervisor;
        this->name_faculty = other.name_faculty;
        this->name_university = other.name_university;
        this->name_cathedra = other.name_cathedra;

        other.name_dissertation = nullptr;
        other.name_supervisor = nullptr;
        other.name_faculty = nullptr;
        other.name_university = nullptr;
        other.name_cathedra = nullptr;
    }

    ~Aspirant()
    {
        delete name_dissertation;
        delete name_supervisor;
        delete name_faculty;
        delete name_university;
        delete name_cathedra;
    }
    
     string get_name_dissertation() { return *name_dissertation; }
    string get_name_supervisor() { return *name_supervisor; }
    string get_name_faculty() { return *name_faculty; }
    string get_name_university() { return *name_university; }
    string get_name_cathedra() { return *name_cathedra; }

    void set_name_dissertation(string name_dissertation) { *(this->name_dissertation) = name_dissertation; }
    void set_name_supervisor(string name_supervisor) { *(this->name_supervisor) = name_supervisor; }
    void set_name_faculty(string name_faculty) { *(this->name_faculty) = name_faculty; }
    void set_name_university(string name_university) { *(this->name_university) = name_university; }
    void set_name_cathedra(string name_cathedra) { *(this->name_cathedra) = name_cathedra; }
};

void print_student(Student student)
{
    cout << "Name: " << student.get_surname() << endl;
    cout << "Age: " << student.get_age() << endl;
    cout << "Specialty: " << student.get_name_specialty() << endl;
    cout << "Group: " << student.get_group() << endl;
    cout << "Average mark: " << student.get_average_mark() << endl;
    cout << "Full name teacher: " << student.get_full_name_teacher() << endl;
}

void print_aspirant(Aspirant aspirant)
{
    print_student(aspirant);
    cout << "Name dissertation: " << aspirant.get_name_dissertation() << endl;
    cout << "Name supervisor: " << aspirant.get_name_supervisor() << endl;
    cout << "Name faculty: " << aspirant.get_name_faculty() << endl;
    cout << "Name university: " << aspirant.get_name_university() << endl;
    cout << "Name cathedra: " << aspirant.get_name_cathedra() << endl;
}

int main()
{
    cout << "student 1 real-------------------" << endl;
    Student student("Ivan", "Ivanov", 20, "Computer Science", "CS-101", 4.5, "Petrovich");
    print_student(student);
    cout << endl << endl;
    cout << "aspirant 1 real-------------------" << endl;
    Aspirant aspirant("Ivan", "Ivanov", 20, "Computer Science", "CS-101", 4.5, "Peter Griffin Petrovichev",
                      "Dissertation№1", "Anna Romanovna", "Design ", "University Shevchenka", "Cathedra of CS");
    print_aspirant(aspirant);
    cout << endl << endl;
    cout << endl << endl;

    
    cout << "student 2 copy------------------" << endl;
    Student student2 = student;
    print_student(student2);
    cout << endl << endl;
    cout << "aspirant 2 copy------------------" << endl;
    Aspirant aspirant2 = aspirant;
    print_aspirant (aspirant2);

    return 0;
}