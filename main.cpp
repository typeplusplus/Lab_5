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

    Money n = m % 50;
    cout << "50% of m is " << n << endl;
    
    n = 10 * m;
    cout << "10 times value is " << n << endl;

    Money a(8, 75); //a = $8.75
    Money b(5, 80); //b = $5.80

    cout << "\nTesting Arithmatic Operations: \n";

    Money t;
    double c;

    t = a + b;
    cout << a << " + " << b << " = " << t << endl;

    t = a - b;
    cout << a << " - " << b << " = " << t << endl;
    cout << b << " - " << a << " = " << b-a << endl;

    c = 2;
    t = a * c;
    cout << a << " * " << c << " = " << t << endl;

    c = 2;
    t = a/c;
    cout << a << " / " << c << " = " << t << endl;

    cout << a << " - " << t << " = " << a-t << endl;
    
    if(a == b)
		cout << a << "=" << b << endl;
	else
		cout << a << " not equal to " << b << endl;
	return 0;
 }
