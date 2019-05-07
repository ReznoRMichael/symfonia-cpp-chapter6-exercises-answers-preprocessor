#include <iostream>

using namespace std;

#define CZYNNIK(a,b) ((a)/((a)+(b)))
int d = 0;

inline double czynnik(double a, double b)
{
    double wynik = a / (a + b);
    return wynik;
}

int main()
{
    while(d < 10)
    {
        cout << "Czynnik = " << CZYNNIK(++d, 2.0);
        cout << ", dla d = " << d << endl;
    }

    d = 0;
    cout << endl;

    while(d < 10)
    {
        cout << "Czynnik = " << czynnik(++d, 2.0);
        cout << ", dla d = " << d << endl;
    }

    return 0;
}
