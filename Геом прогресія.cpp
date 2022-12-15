#include <iostream>
using namespace std;

    // Функція, що знаходить n-ий член прогресії    
    double member(double b, double q, unsigned int n)
    {
    if (n == 1)                                     // Перевірка n = 1
        {
        return b;                                   // Вивести b
        }
    return q * member(b, q, n - 1);                 // Рекурсивний спуск
    }

    // Функція, що знаходить суму перших n членів прогресії
    double suma(double b, double q, unsigned int n)
    {
    if (n == 0)                                     // Перевірка n = 0
        {
        return 0.0;                                 // Вевисти 0
        }
    return member(b, q, n) + suma(b, q, n - 1);     // Рекурсивний спуск
    }
    
    // Основна програма
    int main()
    {
    double b;                                   // Задаємо тип змінних
    double q;
    unsigned int n;
    
    cout << "Введіть перший член прогресії:";   // Вводимо значення змінних
    cin >> b;
    cout << "Введіть знаменник прогресії:";
    cin >> q;
    cout << "Введіть n:";
    cin >> n;
    
    cout << "n-ий член прогресії:" << member(b, q, n) << endl;      // Виводимо результати обчислень функцій
    cout << "Сума перших n членів:" << suma(b, q, n);
    
    return 0;
    }