#include <iostream>
#include "ModulGoncharuk.h"
using namespace std;

int main()
{
    cout << "Модульне тестування для завдання 9.1\n";
    for(int i = 0; i < 4; i++)
        {
            int p;
            string result;
            cout << "Введіть суму покупки: ";
            cin >> p;
            cout << "Результат: ";
            cin >> result;
            if (task9_1(p) == result)
                cout << "Тест#"<<i+1<<" passed\n";
            else
                cout << "Тест#"<<i+1<<" failed\n";
        }

    cout << "Модульне тестування для завдання 9.2\n";
    for (int i = 0; i < 4; i++)
        {
            float footsize;
            float result;
            cout << "Введіть температуру за шкалою Фаренгейта: ";
            cin >> footsize;
            cout << "Результат: ";
            cin >> result;
            if (task9_2(footsize) == result)
                cout << "Тест#"<<i+1<<" passed\n";
            else
                cout << "Тест#"<<i+1<<" failed\n";
        }

    cout << "Модульне тестування для завдання 9.3\n";
    for (int i = 0; i < 4; i++)
        {
            int number;
            int result;
            cout << "Введіть натуральне число N від 0 до 51950: ";
            cin >> number;
            cout << "Результат: ";
            cin >> result;
            if (task9_3(number) == result)
                cout << "Тест#"<<i+1<<" рassed\n";
            else
                cout << "Тест#"<<i+1<<" failed\n";
        }
}
