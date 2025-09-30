// Lab_03_3.cpp
// Ценюк Олександр
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 26

#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main()
{
    double x;
    double R;
    double y;

    cout << " Vvedit R: ";
    cin >> R;
    cout << "Vvedit x: ";
    cin >> x;
    if (x < -5)
        y = -3.0;
    else if (x <= -R)
        y = (3.0 / (5.0 - R)) * (x + R);
    else if (x < R)
        y = sqrt(R * R - x * x);
    else if (x <= 8)
        y = (R / (8.0 - R)) * (x - R);
    else
        y = R;
    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;
}
