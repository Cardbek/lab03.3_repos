// Lab_03_3.cpp 
// Ценюк Олександр 
// Лабораторна робота № 3.3 
// Розгалуження, задане графіком функції. 
// Варіант 26 
#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double x;  // вхідний аргумент 
    double R;  // вхідний параметр 
    double y;  // результат обчислення виразу 

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // розгалуження в повній формі 
    if (x <= -5)
        y = -3;
    else 
        if (-5 < x && x <= -R)
            y = -3 + 3.0 / 5 - R * (x + 5);  // коригування поділу
        else 
            if (-R < x && x <= R)
                y = sqrt(R * R - x * x);  // перевірка на негативне значення під коренем
            else 
                if (R < x && x < 8)
                    y = R / 8 - R * (x - R);  // коригування для цього діапазону
                else
                    y = R;

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}
