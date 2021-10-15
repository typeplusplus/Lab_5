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

        friend ostream& operator <<(ostream& out, Money a);
    
        friend const Money operator %(int amount, const Money & value1);
        
        friend const Money operator +(const Money & value1, const Money & value2);
        
        friend const Money operator -(const Money & value1, const Money & value2);
        
        friend const Money operator *(const Money & value1, double amount);
        
        friend const Money operator *(double amount, const Money & value1);
        
        friend const Money operator /(const Money & value1, double amount);
        
        friend const bool operator ==(const Money & value1, const Money & value2);

    private:
        //Member data
        int dollars;
        int cents;
};

#endif
