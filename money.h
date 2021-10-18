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
        
        //Accessors
    /*
    getDollars member function: Return object Dollars value
    @param - None
    @return - None
    */
        int getDollars() const;
    /*
    getCents member function: Return object Cents value
    @param - None
    @return - None
    */
        int getCents() const;
     /*
    getTotal member function: Return object Cents value
    @param - None
    @return - None
    */   
        double getTotal() const;
    
    //Overloaded Operators
        friend ostream& operator <<(ostream& out, Money a);
        friend const Money operator %(int amount, const Money & value1);
        friend const Money operator +(const Money & value1, const Money & value2);    
        friend const Money operator -(const Money & value1, const Money & value2);
        friend const Money operator *(const Money & value1, double amount);
        friend const Money operator *(double amount, const Money & value1);
        friend const Money operator /(const Money & value1, double amount);
        friend const bool operator ==(const Money & value1, const Money & value2);

    private:
    //Members
        int dollars;
        int cents;
};

#endif
