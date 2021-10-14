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

//Overload operators
ostream& operator<<(ostream& out, Money a)
{
    out << "$" << a.getDollars() << "." << setw(2) << setfill('0') << a.getCents();
    return out;
}

//Addition
const Money operator +(const Money & value1, const Money & value2)
{
    int allCents1 = value1.getDollars() * 100 + value1.getCents();
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

//Subtraction
const Money operator -(const Money & value1, const Money & value2)
{
    int allCents1 = value1.getDollars() * 100 + value1.getCents();
    int allCents2 = value2.getDollars() * 100 + value2.getCents();

    int sumAllCents = allCents1 - allCents2;
    int absAllCents = abs(sumAllCents);

    int finalDollars = absAllCents/100;
    int finalCents = absAllCents % 100;

    if(sumAllCents < 0)
    {
        finalDollars = -finalDollars;
        finalCents = finalCents;
    }
    return Money(finalDollars, finalCents);
}

//Multiplication (Money and Amount)
const Money operator *(const Money & value1, double amount)
{
    int allCents1 = value1.getDollars() * 100 + value1.getCents();

    int sumAllCents = allCents1 * amount;
    int absAllCents = abs(sumAllCents);

    int finalDollars = absAllCents/100;
    int finalCents = absAllCents % 100;

    if(sumAllCents < 0)
    {
        finalDollars = -finalDollars;
        finalCents = finalCents;
    }
    return Money(finalDollars, finalCents);
}

//Multiplication (Amount and Money)
const Money operator *(double amount, const Money & value1)
{
    int allCents1 = value1.getDollars() * 100 + value1.getCents();

    int sumAllCents = allCents1 * amount;
    int absAllCents = abs(sumAllCents);

    int finalDollars = absAllCents/100;
    int finalCents = absAllCents % 100;

    if(sumAllCents < 0)
    {
        finalDollars = -finalDollars;
        finalCents = finalCents;
    }
    return Money(finalDollars, finalCents);
}

//Division
const Money operator /(const Money & value1, double amount)
{
    int allCents1 = value1.getDollars() * 100 + value1.getCents();

    int sumAllCents = allCents1 / amount;
    int absAllCents = abs(sumAllCents);

    int finalDollars = absAllCents/100;
    int finalCents = absAllCents % 100;

    if(sumAllCents < 0)
    {
        finalDollars = -finalDollars;
        finalCents = finalCents;
    }
    return Money(finalDollars, finalCents);
}

//Equals equals
const bool operator ==(const Money & value1, const Money & value2)
{
	int allCents1 = value1.getDollars() * 100 + value1.getCents();
	int allCents2 = value2.getDollars() * 100 + value2.getCents();

	if (allCents1 == allCents2)
		return true;
	else
		return false;
}
