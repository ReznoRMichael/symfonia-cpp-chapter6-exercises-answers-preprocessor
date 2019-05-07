#include <iostream>

using namespace std;

inline double dziel(double a, double b)
{
    double wynik = a / b;
    return wynik;
}

int main()
{
    cout << dziel(2+3, 5.0) << endl; // na ekranie: 1
    return 0;
}
