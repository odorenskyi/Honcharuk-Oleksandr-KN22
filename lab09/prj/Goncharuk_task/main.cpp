#include <iostream>
#include "ModulesChervonyi.h"

using namespace std;

int main()
{
    while (true)
    {
        int action;
        cout<< "������ �������� ��� �, � �� z ���������� Enter: "; cin >> action;
        switch(action)
        {
        case 7:
            float x,y,z;
            cout << "x: "; cin >> x;
            cout << "y: "; cin >> y;
            cout << "z: "; cin >> z;
            cout << "S= " << s_calculation(x, y, z) << endl;
            break;
        case 5:
            int p;
            cout << "������ ���� �������: "; cin >> p;
            cout << task9_1(p) << endl;
            break;
        case 4:
            float footsize;
            cout << "������ ����������� �� ������ ����������: "; cin >> footsize;
            cout << task9_2(footsize) << endl;
            break;
        case 3:
            int number;
            cout << "������ ���������� ����� N �� 0 �� 51950: "; cin >> number;
            cout << task9_3(number) << endl;
            break;
        default:
            if (action == 9 || action == 0)
                    exit(0);
            else
                cout << "\a";
        }

    }
}
