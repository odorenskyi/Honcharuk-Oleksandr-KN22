#include <iostream>
#include "ModulGoncharuk.h"
using namespace std;

int main()
{
    cout << "�������� ���������� ��� �������� 9.1\n";
    for(int i = 0; i < 4; i++)
        {
            int p;
            string result;
            cout << "������ ���� �������: ";
            cin >> p;
            cout << "���������: ";
            cin >> result;
            if (task9_1(p) == result)
                cout << "����#"<<i+1<<" passed\n";
            else
                cout << "����#"<<i+1<<" failed\n";
        }

    cout << "�������� ���������� ��� �������� 9.2\n";
    for (int i = 0; i < 4; i++)
        {
            float footsize;
            float result;
            cout << "������ ����������� �� ������ ����������: ";
            cin >> footsize;
            cout << "���������: ";
            cin >> result;
            if (task9_2(footsize) == result)
                cout << "����#"<<i+1<<" passed\n";
            else
                cout << "����#"<<i+1<<" failed\n";
        }

    cout << "�������� ���������� ��� �������� 9.3\n";
    for (int i = 0; i < 4; i++)
        {
            int number;
            int result;
            cout << "������ ���������� ����� N �� 0 �� 51950: ";
            cin >> number;
            cout << "���������: ";
            cin >> result;
            if (task9_3(number) == result)
                cout << "����#"<<i+1<<" �assed\n";
            else
                cout << "����#"<<i+1<<" failed\n";
        }
}
