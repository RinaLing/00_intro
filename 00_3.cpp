// 00_3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{

    int a, b;

    std::cin >> a >> b;
    std::cout << (a * a + b * b) + (a * a - b * -b) - 3 * a * b;
    return 0;
}