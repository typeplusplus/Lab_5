#ifndef MONEY_H
#define MONEY_H

#include <iostream>

using namespace std;

class Money
{
    public:
        //Constructors
        Money();
        Money(int, int);

        //Mutators
        //Accessors
        int getDollars() const;
        int getCents() const;
        double getTotal() const;

        friend ostream& operator<<(ostream& out, Money a);
        const Money operator+ (Money & value2);


    private:
        //Member data
        int dollars;
        int cents;
};

#endif