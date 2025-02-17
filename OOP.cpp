/*/
Створіть клас з ім’ям Date для зберігання дати (або
використовуйте раніше створений).
У класі повинна бути функція-член, яка збільшує
день на 1.
Напишіть відповідні конструктори і функції-члени.
У класі повинні бути перевантажені операціїї: ++, –,
! =, ==, >, <, >>, <<, =, +=, –=, ().
Використовуйте звичайне і дружнє перевантаження.
/*/
#include <iostream>
using namespace std;

class Data
{
private:
    int day;
    int month;
    int year;

    void increase()
    {
        if (day > 30)
        {
            day -= 30;
            month++;
        }
        if (month > 12)
        {
            month -= 12;
            year++;
        }
    }

public:
    Data(int d = 1, int m = 1, int y = 2000) : day(d), month(m), year(y) {}

    void operatorplusplusDay()
    {
        day++;
        increase();
    }

    Data& operator++() // PRE increment
    {
        operatorplusplusDay();
        return *this;
    }

    Data operator++(int) // POST increment
    {
        Data pro = *this;
        operatorplusplusDay();
        return pro;
    }

    Data& operator--() // PRE decrement
    {
        day--;
        operatorplusplusDay();
        return *this;
    }

    Data operator--(int) // POST decrement
    {
        Data pro = *this;
        day--;
        operatorplusplusDay();
        return pro;
    }

    bool operator==(const Data& other) const
    {
        return day == other.day && month == other.month && year == other.year;
    }

    bool operator!=(const Data& other) const
    {
        return !(*this == other);
    }

    bool operator>(const Data& other) const
    {
        if (year != other.year)
            return year > other.year;
        if (month != other.month)
            return month > other.month;
        return day > other.day;
    }

    bool operator<(const Data& other) const
    {
        return !(*this >= other);
    }

    bool operator>=(const Data& other) const
    {
        return !(*this < other);
    }

    bool operator<=(const Data& other) const
    {
        return !(*this > other);
    }

    Data& operator=(const Data& other)
    {
        if (this != &other)
        {
            day = other.day;
            month = other.month;
            year = other.year;
        }
        return *this;
    }

    Data& operator+=(int days)
    {
        day += days;
        operatorplusplusDay();
        return *this;
    }

    Data& operator-=(int days)
    {
        day -= days;
        operatorplusplusDay();
        return *this;
    }

    friend ostream& operator<<(ostream& os, const Data& date)
    {
        os << date.day << "/" << date.month << "/" << date.year;
        return os;
    }

    friend istream& operator>>(istream& is, Data& date)
    {
        is >> date.day >> date.month >> date.year;
        return is;
    }

    void operator()()
    {
        cout << "Date: " << *this << endl;
    }
};

int main()
{
    return 0;
}