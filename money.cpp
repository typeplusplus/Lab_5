#include <iostream>
#include <iomanip>

#include "money.h"

using namespace std;

Money::Money()
{
    int dollars = 0;
    int cents = 0;
}

Money::Money(int dollarAmount, int centAmount)
{
    dollars = dollarAmount;
    cents = centAmount;
}

int Money::getDollars() const
{
    return dollars;
}

int Money::getCents() const
{
    return cents;
}

//Overload
ostream& operator<<(ostream& out, Money a)
{
    out << a.getDollars() << "." << setw(2) << setfill('0') << a.getCents();
    return out;
}

const Money operator+ (Money & value2)
{
    int allCents1 = value2.getDollars() * 100 + value2.getCents();
    int allCents2 = value2.getDollars() * 100 + value2.getCents();

    int sumAllCents = allCents1 + allCents2;
    int absAllCents = abs(sumAllCents);

    int finalDollars = absAllCents/100;
    int finalCents = absAllCents % 100;

    if(sumAllCents < 0)
    {
        finalDollars = -finalDollars;
        finalCents = -finalCents;
    }
    return Money(finalDollars, finalCents);
}