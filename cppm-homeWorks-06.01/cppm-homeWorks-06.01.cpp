#include <iostream>
#include "Header.h"

int main()
{
    setlocale(LC_ALL, "ru");
    int a, b, c;

    std::cout << "Введите первое число:";
    std::cin >> a;
    std::cout << "Введите второе число:";
    std::cin >> b;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень):\n";
    std::cin >> c;

    switch (c)
    {
    case 1:
        addition(a, b);
        break;
    case 2:
        subtraction(a, b);
        break;
    case 3:
        multiplication(a, b);
        break;
    case 4:
        division(a, b);
        break;
    case 5:
        exponentiation(a, b);
        break;
    default:
        break;
    }

    return 0;

}

