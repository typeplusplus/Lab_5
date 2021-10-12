//Reference: http://www1.udel.edu/CIS/181/eschrag/07J/lectures/2007.06.28.pdf

#include <iostream>

#include "printmefirst.h"
#include "money.h"

using namespace std;

int main()
{
    printmefirst("Reece Doyle", "CS-116 2021FA");

    Money m(2, 2);
    cout << "Original value is " << m << endl;

    Money n;
    //Money n = m % 50;
    cout << "50% of m is " << n << endl;

    //n = 10 * m;
    cout << "10 times value is " << n << endl;

    //Money a, b;
    Money a(8, 75); //a = $8.75
    Money b(5, 80); //b = $5.80

    cout << "\nTesting Arithmatic Operations: \n";

    Money t;
    double c;

    t = a + b;
    cout << a << "+" << b << "=" << t << endl;
    //
}
