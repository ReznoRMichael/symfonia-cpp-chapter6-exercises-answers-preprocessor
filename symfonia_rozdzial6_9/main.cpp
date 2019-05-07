#include <iostream>

using namespace std;

#define DZIEL(a,b) (a/b)

int main()
{
    cout << DZIEL(2+3, 5.0) << endl; // na ekranie: 2.6

#undef DZIEL

#define DZIEL(a,b) ((a) / (b))

    cout << DZIEL(2+3, 5.0) << endl; // na ekranie: 1

    return 0;
}
