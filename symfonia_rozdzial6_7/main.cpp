#include <iostream>

using namespace std;

const int A = 1;
const int B = 2;
//********************************************
const int LEWY_POKLAD = 20;
const int PRAWY_POKLAD = 30;
const int SSS = LEWY_POKLAD + PRAWY_POKLAD;
//********************************************
const int trzy = 3;
const int DZIESIEC = 10;

void f()
{
    double s1 = trzy / DZIESIEC;
    double s2 = DZIESIEC + trzy;
    double s3 = DZIESIEC / trzy;
}


int main()
{
    cout << (2 * SSS) << endl;
    return 0;
}
