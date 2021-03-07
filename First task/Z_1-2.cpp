#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a;
    double b;
    cout << "Введите два числа";
    cout << "a="; cin >> a;
    cout << "b="; cin >> b;

    cout << (a * a * a + b * b * b)/2 << "  " << sqrt(fabs(a * b)) << "\n";

}

