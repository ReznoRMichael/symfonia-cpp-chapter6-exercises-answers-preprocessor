#include <iostream>

using namespace std;

#define MISJA(a) Apollo_ ## a

#define LINIA(a) cout << "Line: " << __LINE__ << endl;\
                 cout << "Argument: \"" << #a << "\"" << endl;\
                 cout << "Value: " << (a) << endl;

int main()
{
    int MISJA(12) = 12;
    cout << Apollo_12 << endl;

    int Satan = 666;

    LINIA(Satan);

    return 0;
}
