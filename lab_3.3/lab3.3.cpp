// Lab_03_3.cpp 
// ����� ��������� 
// ����������� ������ � 3.3 
// ������������, ������ �������� �������. 
// ������ 26 
#include <iostream> 
#include <cmath> 

using namespace std;

int main()
{
    double x;  // ������� �������� 
    double R;  // ������� �������� 
    double y;  // ��������� ���������� ������ 

    cout << "R = "; cin >> R;
    cout << "x = "; cin >> x;

    // ������������ � ����� ���� 
    if (x <= -5)
        y = -3;
    else 
        if (-5 < x && x <= -R)
            y = -3 + 3.0 / 5 - R * (x + 5);  // ����������� �����
        else 
            if (-R < x && x <= R)
                y = sqrt(R * R - x * x);  // �������� �� ��������� �������� �� �������
            else 
                if (R < x && x < 8)
                    y = R / 8 - R * (x - R);  // ����������� ��� ����� ��������
                else
                    y = R;

    cout << endl;
    cout << "y = " << y << endl;

    cin.get();
    return 0;
}
