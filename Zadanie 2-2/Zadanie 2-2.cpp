#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

double f1(const double x, const double a);
double f2(const double x, const double a);

    int main() { 
      
    setlocale(LC_ALL, "RUSSIAN");

    const auto a = 0.3;
    double x;
    cout << "Введите переменную х = ";
    cin >> x;

 

    if (x * a < 1)
    {
        cout << "y =  " << f1(x, a);
    }
    else (x * a >= 1);
    {
        cout << "y =  " << f2(x, a);
    }
   
    double f1(const double x, const double a);
    {
        return a * sin((x * x - 1) / 10);
    }
    double f2(const double x, const double a);
    {
        return a * cos((x - 1) / 10);
    }
    return(0);
}
