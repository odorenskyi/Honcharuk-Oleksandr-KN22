#include <iostream>
#include <clocale>

using namespace std;

void SoftwareDeveloper()

void s_calculation(char choice);{
    system("chcp 1251");
    system("cls");

    setlocale(LC_ALL, "ukr");
    cout << "\n ------------------------------------------------\n"
         << "  | Oleksandr Goncharuk |"
         << "  | ��������� �������� |  "
         << "\n   ----------- � All Rights Reserved ---------------\n\n\n\n";
}

void s_calculation(char choice)
{

    switch (choice) {
    case 'j':
        task_9_1();
        {
                float purchaseAmount;
    int bonusPoints = 0;

    cout << "������ ���� �������: ";
    cin >> purchaseAmount;

    if (purchaseAmount >= 100 && purchaseAmount <= 200) {
        bonusPoints = 1;
    } else if (purchaseAmount > 200 && purchaseAmount <= 500) {
        bonusPoints = 5;
        if (purchaseAmount >= 300 && purchaseAmount <= 500) {
            bonusPoints += 2;
        }
    } else if (purchaseAmount > 500 && purchaseAmount <= 2500) {
        bonusPoints = (int)purchaseAmount / 100;
    } else if (purchaseAmount > 2500 && purchaseAmount <= 5000) {
        bonusPoints = 150;
    } else if (purchaseAmount > 5000) {
        bonusPoints = 300;
    }

    float discountAmount = bonusPoints * 0.25;
    float amountToPay = purchaseAmount - discountAmount;

    cout << "�������� ������ ����: " << bonusPoints << endl;
    cout << "����� ������: " << discountAmount << " ���." << endl;
    cout << "���� ��� ������ � �������: " << amountToPay << " ���." << endl;


        }
        task_9_2();
        {
            double tf, tc;

    // ��� ����������� �� ������ ����������
    cout << "������ ����������� �� ������ ����������: ";
    cin >> tf;

    // ���������� ����������� �� ������ ������
    tc = 5.0 / 9.0 * (tf - 32.0);

    // ���� ����������
    cout << "����������� �� ������ ������: " << tc << " �������" << endl;

        }

        task_9_3();
        {
            int n, bit, count = 0;

    // ��� ����� N
    cout << "������ ���������� ����� N �� 0 �� 51950: ";
    cin >> n;

    // ��������� ��� D4
    bit = (n >> 3) & 1;

    // ϳ�������� ������� �������� 0 ��� 1
    for (int i = 0; i < 16; i++) {
        if ((n & 1) == bit) {
            count++;
        }
        n >>= 1;
    }

    // ���� ����������
    cout << "ʳ������ ";
    cout << (bit == 0 ? "�������� 0" : "�������� 1");
    cout << ": " << count << endl;

        }

        break;
        default:
        cout << "�������! ������� s_calculation() ����� ��������� ����� � �������� 'j'." << endl;
        system("pause");
        break;
    }
}
