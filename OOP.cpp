/*/
Створіть структуру, що описує простий дріб. Реалізуйте арифметичні операції з дробами: суму, різницю, множення, ділення.

Врахувати можливість скорочення дробів і переведення з неправильного дробу в простий.
/*/
#include <iostream>
using namespace std;

struct drob
{
    int CH;
    int ZN;
};

int NSD (int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}

drob sum (drob a, drob b)
{
    drob c;
    c.CH = a.CH * b.ZN + b.CH * a.ZN;
    c.ZN = a.ZN * b.ZN;
    
    int nsd = NSD(c.CH, c.ZN);
    
    c.CH /= nsd;
    c.ZN /= nsd;
    return c;
}


drob min (drob a, drob b)
{
    drob c;
    c.CH = a.CH * b.ZN - b.CH * a.ZN;
    c.ZN = a.ZN * b.ZN;
    int nsd = NSD(c.CH, c.ZN);
    c.CH /= nsd;
    c.ZN /= nsd;
    return c;
}


drob mnozh (drob a, drob b)
{
    drob c;
    c.CH = a.CH * b.CH;
    c.ZN = a.ZN * b.ZN;
    int nsd = NSD(c.CH, c.ZN);
    c.CH /= nsd;
    c.ZN /= nsd;
    return c;
}


drob dil(drob a, drob b)
{
    drob c;
    c.CH = a.CH * b.ZN;
    c.ZN = a.ZN * b.CH;
    int nsd = NSD(c.CH, c.ZN);
    c.CH /= nsd;
    c.ZN /= nsd;
    return c;
}


int main()
{
    drob a, b;
    cout << "Enter first fraction: ";
    cin >> a.CH >> a.ZN;
    cout << "Enter second fraction: ";
    cin >> b.CH >> b.ZN;
    cout << "Sum: " << sum(a, b).CH << "/" << sum(a, b).ZN << endl;
    cout << "Sub: " << min(a, b).CH << "/" << min(a, b).ZN << endl;
    cout << "Mul: " << mnozh(a, b).CH << "/" << mnozh(a, b).ZN << endl;
    cout << "Div: " << dil(a, b).CH << "/" << dil(a, b).ZN << endl;
    return 0;
}