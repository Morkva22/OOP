/*/
Створіть клас Student, який міститиме інформацію про студента.
За допомогою механізму успадкування, реалізуйте клас Aspirant
(аспірант — студент, який готується до захисту кандидатської роботи) похідний від Student.
/*/

#include <iostream>
#include <string>
using namespace std;


class Student
{
public:
      Student(string name, string surname, int age,string name_specialty, string group,double average_mark,string full_name_teacher)
       :name(name), surname(surname), age(age),name_specialty(name_specialty), group(group),average_mark(average_mark), full_name_teacher(full_name_teacher) {}


    //// getters
    string get_surname()
    {return surname;}
    int get_age()
    {return age;}
    string get_name_specialty()
    {return name_specialty;}
    string get_group()
    {return group;}
    double get_average_mark()
    {return average_mark;}
    string get_full_name_teacher()
    {return full_name_teacher;}

    
// /////////setters    
    void set_name(string name)
    {this->name = name;}
    void set_surname(string surname)
    {this->surname = surname;}
    void set_age(int age)
    {this->age = age;}
    void set_name_specialty(string name_specialty)
    {this->name_specialty = name_specialty;}
    void set_group(string group)
    {this->group = group;}
    void set_average_mark(double average_mark)
    {this->average_mark = average_mark;}
    void set_full_name_teacher(string full_name_teacher)
    {this->full_name_teacher = full_name_teacher;}

private:
    string name;
    string surname;
    int age;
    string name_specialty;
    string group;
    double average_mark;
    string full_name_teacher;
};

class Aspirant : public Student{
private:
    string name_dissertation;
    string name_supervisor;
    string name_specialty;
    string name_faculty;
    string name_university;
    string name_cathedra;
public:
    //
    Aspirant(string name, string surname, int age, string name_specialty, string group, double average_mark, string full_name_teacher,
             string name_dissertation, string name_supervisor, string name_faculty, string name_university, string name_cathedra)
        : Student(name, surname, age, name_specialty, group, average_mark, full_name_teacher),
          name_dissertation(name_dissertation),
          name_supervisor(name_supervisor),
          name_faculty(name_faculty),
          name_university(name_university),

          name_cathedra(name_cathedra)
    {
    
    }
    
    string get_name_dissertation()
    {return name_dissertation;}
    string get_name_supervisor()
    {return name_supervisor;}
    string get_name_faculty()
    {return name_faculty;}
    string get_name_university()
    {return name_university;}
    string get_name_cathedra()
    {return name_cathedra;}

    void set_name_dissertation(string name_dissertation)
    {this->name_dissertation = name_dissertation;}
    void set_name_supervisor(string name_supervisor)
    {this->name_supervisor = name_supervisor;}
    void set_name_faculty(string name_faculty)
    {this->name_faculty = name_faculty;}
    void set_name_university(string name_university)
    {this->name_university = name_university;}
    void set_name_cathedra(string name_cathedra)
    {this->name_cathedra = name_cathedra;}
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

Student student("Ivan", "Ivanov", 20, "Computer Science", "CS-101", 4.5, "Petrovich");
print_student(student);
    cout << endl << endl;
    Aspirant aspirant("Ivan", "Ivanov", 20, "Computer Science", "CS-101", 4.5, "Peter Griffin Petrovichev",
    "Dissertation№1", "Anna Romanovna", "Design ", "University Shevchenka","Cathedra of CS");
    print_aspirant(aspirant);
    return 0;
}
