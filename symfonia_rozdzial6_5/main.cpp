#include <iostream>

using namespace std;

const int trzy = 3;
#define DZIESIEC 10;

void f()
{
    double s1 = trzy / DZIESIEC;
    double s2 = DZIESIEC + trzy;
    double s3 = DZIESIEC / trzy;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
