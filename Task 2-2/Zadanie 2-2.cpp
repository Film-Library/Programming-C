#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
double F1(const double x, const double a);
double F2(const double x, const double a);

using namespace std;


    int main() { 
      
    setlocale(LC_ALL, "RUSSIAN");

    const auto a = 0.3;
    double x;
    cout << "Введите переменную х = ";
    cin >> x;

 

    if (x * a < 1)
    {
        cout << "y =  " << F1(x, a);
    }
    else (x * a >= 1);
    {
        cout << "y =  " << F2(x, a);
    }
   
    double F1(const double x, const double a);
    {
        return a * sin((x * x - 1) / 10);
    }
    double F2(const double x, const double a);
    {
        return a * cos((x - 1) / 10);
    }
    return(0);
}
