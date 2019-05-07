#include <iostream>
#

using namespace std;

#define PLIK "zadanie20.h"
#include PLIK

int main()
{
    cout << "Hello world!" << endl;
    cout << f(1,2) << endl;

    cout << "Welcome aboard!" << endl;

    cout << "Compiled file: " << __FILE__ << endl;
    cout << "Line: " << __LINE__ << endl;
    cout << "Date: " << __DATE__ << endl;
    cout << "Time: " << __TIME__ << endl;
    #ifdef __cplusplus
        cout << "C++ compiler was used." << endl;
    #else
        cout << "C compiler was used." << endl;
    #endif // __cplusplus
    return 0;
}
