/*/
Створіть структуру, що описує точку в двовимірній системі координат(x, y).
За допомогою цієї структури задайте дві точки. Напишіть функцію, яка обчислює відстань між цими двома точками.
/*/
#include <iostream>
using namespace std;

struct Point {
    int x;
    int y;
};

int distance(Point p1, Point p2) {
    int x = p2.x - p1.x;
    int y = p2.y - p1.y;
    return sqrt(x * x + y * y);
}

int main() {
    Point p1 = {3, 2};
    Point p2 = {1, 1};
    cout << "Distance between p1 and p2: " << distance(p1, p2) << endl;
    return 0;
}