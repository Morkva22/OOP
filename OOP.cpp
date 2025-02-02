/*/

/*/
#include <iostream>
using namespace std;

class Rectangle {
private:
    int width;
    int height;
public:
    Rectangle() : Rectangle(1, 1) {
    }
    
    Rectangle(int size) : Rectangle(size, size) {
    }
    
    Rectangle(int w, int h) : width(w), height(h) {
    }
    int S() {
        return width * height;
    }
};

int main() {
    Rectangle rect1;
    Rectangle rect2(5);
    Rectangle rect3(3, 4);

    cout << "S rect1: " << rect1.S() << endl;
    cout << "S rect2: " << rect2.S() << endl;
    cout << "S rect3: " << rect3.S() << endl;

    return 0;
}
