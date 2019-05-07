#include <iostream>

using namespace std;

#define GRUDZIEN_2007 1
#define SIERPIEN_2005 2

#define WERSJA_EKSPERYMENTU GRUDZIEN_2007

#if (WERSJA_EKSPERYMENTU == GRUDZIEN_2007)

    #define TYP_SPREZARKI 3000

#elif (WERSJA_EKSPERYMENTU == SIERPIEN_2005)

    #define TYP_SPREZARKI 2050

#else

    #error "Nieokreslony zostal typ eksperymentu"

#endif

int main()
{
    cout << TYP_SPREZARKI << endl;
    return 0;
}
