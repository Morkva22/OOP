/*/
Створити структуру, що описує прямокутник. Написати функції для роботи з цією структурою: переміщення прямокутника, зміна розміру прямокутника, друк прямокутника.
/*/
#include <iostream>
using namespace std;

struct triangle
{
    int x, y, width, height;
};

triangle move(triangle t, int x, int y)
{
    t.x += x;
    t.y += y;
    return t;
}
triangle size(triangle t , int width, int height)
{
    t.width += width;
    t.height += height;
    return t;
}
void print(triangle t)
{
    cout << "x: " << t.x << " y: " << t.y << " width: " << t.width << " height: " << t.height << endl;
}
void menu()
{
    cout << endl;
    cout << " 1 - move" << endl;
    cout << " 2 - size" << endl;
    cout << " 3 - print" << endl;
    cout << " 4 - exit" << endl;
}

int main()
{
    triangle t = {0, 0, 0, 0};
    int choice = 0;
    cout << "Your rectangle now: " << endl;
    print(t);
    menu();
    cin >> choice;
    if (choice == 1)
    {
        int x, y;
        cout << "Enter x and y: ";
        cin >> x >> y;
        t = move(t, x, y);
        cout<< endl;
        menu();
        cin>> choice;
    }
    if (choice == 2)
    {
        int width, height;
        cout << "Enter width and height: ";
        cin >> width >> height;
        t = size(t, width, height);
        menu();
        cin >> choice;
    }
    if (choice == 3)
    {
        print(t);
        menu();
        cin >> choice;
    }
    if (choice == 4)
    {
        return 0;
    }
}