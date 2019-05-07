#include <iostream>

using namespace std;

#define LEWY_POKLAD 20
#define PRAWY_POKLAD 30
#define SSS LEWY_POKLAD + PRAWY_POKLAD

// Ca³e ostatnie wyra¿enie powinno byæ w nawiasie, inaczej dodawanie zostanie wykonane po mno¿eniu (kolejnoœæ wykonywania dzialan)

int main()
{
    cout << ( 2 * SSS ) << endl;
    return 0;
}
