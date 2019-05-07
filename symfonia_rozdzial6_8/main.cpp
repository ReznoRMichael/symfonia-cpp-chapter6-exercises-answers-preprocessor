#include <iostream>

using namespace std;

#define NNN 10

int main()
{
    cout << NNN << endl;

    // uniewa¿nienie nazwy
#undef NNN

    // redefinicja
#define NNN 50

    cout << NNN << endl;

    return 0;
}
