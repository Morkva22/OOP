/*/
Використовуючи поняття множинного успадкування,
розробіть клас «Коло, вписане в квадрат».
/*/

#include <iostream>
using namespace std;


class Square
{
public:
    Square(double side) : side(side) {}
    
    double getSides() const
    {
        return 4 * side;
    }

    double getArea()
    {
        return side * side;
    } 
protected: double side;
};
    class Circle
    {
        
    public:
        Circle(double r) : radius(r) {}
    
            double getOkruzhnost() const
        {
            return 2 * 3.14 * radius;
        }

        double getArea() const
        {
            return 3.14 * radius * radius;
        } 
    protected:
        double radius;
    };

class CircleInSquare : public Square, public Circle
{

public: CircleInSquare(double side) : Square(side), Circle(side / 2) {}

    void print() {
        cout << "Square side length: " << side << endl;
        cout << "Square area: " << Square::getArea() << endl;
        cout << "Square perimeter: " << getSides() << endl;
        cout << "Inscribed circle radius: " << radius << endl;
        cout << "Inscribed circle area: " << Circle::getArea() << endl;
        cout << "Inscribed circle circumference: " << getOkruzhnost() << endl;
    }
};

int main()
{
    CircleInSquare c(10);
    c.print();
    return 0;
}