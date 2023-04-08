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
         << "  | Олександр Гончарук |  "
         << "\n   ----------- © All Rights Reserved ---------------\n\n\n\n";
}

void s_calculation(char choice)
{

    switch (choice) {
    case 'j':
        task_9_1();
        {
                float purchaseAmount;
    int bonusPoints = 0;

    cout << "Введіть суму покупки: ";
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

    cout << "Зароблені бонусні бали: " << bonusPoints << endl;
    cout << "Розмір знижки: " << discountAmount << " грн." << endl;
    cout << "Сума для оплати зі знижкою: " << amountToPay << " грн." << endl;


        }
        task_9_2();
        {
            double tf, tc;

    // Ввід температури за шкалою Фаренгейта
    cout << "Введіть температуру за шкалою Фаренгейта: ";
    cin >> tf;

    // Обчислення температури за шкалою Цельсія
    tc = 5.0 / 9.0 * (tf - 32.0);

    // Вивід результату
    cout << "Температура за шкалою Цельсія: " << tc << " градусів" << endl;

        }

        task_9_3();
        {
            int n, bit, count = 0;

    // Ввід числа N
    cout << "Введіть натуральне число N від 0 до 51950: ";
    cin >> n;

    // Отримання біту D4
    bit = (n >> 3) & 1;

    // Підрахунок кількості двійкових 0 або 1
    for (int i = 0; i < 16; i++) {
        if ((n & 1) == bit) {
            count++;
        }
        n >>= 1;
    }

    // Вивід результату
    cout << "Кількість ";
    cout << (bit == 0 ? "двійкових 0" : "двійкових 1");
    cout << ": " << count << endl;

        }

        break;
        default:
        cout << "Помилка! Функцію s_calculation() можна викликати тільки з символом 'j'." << endl;
        system("pause");
        break;
    }
}
