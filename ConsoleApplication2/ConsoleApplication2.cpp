﻿// ConsoleApplication2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    setlocale(0, "rus");
    int a;
    int b;
    int x = 1;
    int count = 0;
    int res = 0;

    std::cout << "Введите диапазон в котором нужно найти кол-во простых чисел\n";
    std::cout << "a = "; std::cin >> a;
    std::cout << "b = "; std::cin >> b;
   

    if(a < b && a>0 && b>0)
    {

        for (int i = a; i < b; i++)
        {
            count = 0;
            x = 1;
            std::cout << i;
            while (x <= i)
            {
                if (i % x == 0)
                {
                    count++;
                }
                x += 1;
            }
            if (count > 2)
            {
                res++;
            }
        }
        int end_res = b - a;

        std::cout << "\nпростое = "<< end_res - res <<"";
    }
    else 
    {
        std::cout << "Диапазон не может принимать отрицательные значения";
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
