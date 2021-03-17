#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>

using namespace std;

double F1(const double x, const double a);
double F2(const double x, const double a);

    int main() { 
      
    setlocale(LC_ALL, "RUSSIAN");

    const auto a = 0.3;
    double x;
    cout << "Введите переменную х = ";
    cin >> x;
    double result;
 
    if ((x * a) < 1)
    {
       result =  F1(x, a);
    }
    else ((x * a) >= 1);
    {
       result = F2(x, a);
    }
    cout << "y = " << setprecision(15) << result;
    return(0);
   
    double F1(const double x, const double a);
    {
        return a * sin((x * x - 1) / 10);
    }
    double F2(const double x, const double a);
    {
        return a * cos((x - 1) / 10);
    }
   
}
