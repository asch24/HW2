#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    // 1. Написать программу, которая находит среднее арифметическое значение трёх вещественных чисел.
    /*double a, b, c;
    cout << "Введите три вещественных числа: ";
    cin >> a >> b >> c;
    double avg = (a + b + c) / 3.0;
    cout << "Среднее арифметическое: " << avg ;*/

    // 2. Пользователь вводит число и степень. Программа вычисляет указанную степень этого числа.
    /*double num, exponent;
    cout << "Введите число: ";
    cin >> num;
    cout << "Введите степнь числа: ";
    cin >> exponent;
    double result = pow(num, exponent);
    cout << num << " в степени " << exponent << " = " << result;*/

    // 3. Написать программу, которая  предлагает пользователю ввести радиус окружности, а затем считает площадь и длину этой окружности. Число Pi задать в программе как вещественную константу.
    /*const double Pi = 3.14159;
    double r;
    cout << "Введите радиус окружности: ";
    cin >> r;
    double S = Pi * r * r;
    double L = 2 * Pi * r;
    cout << "Площадь окружности: " << S << "\n";
    cout << "Длина окружности: " << L;*/

    // 4. Написать программу, которая переводит километры в сухопутные и морские мили. 
    /*const double km_land_mile = 0.621371;
    const double km_nautical_mile = 0.539957;
    double km;
    cout << "Введите расстояние в километрах: ";
    cin >> km;
    double land_miles = km * km_land_mile;
    double nautical_miles = km * km_nautical_mile;
    cout << km << " км = " << land_miles << " сухопутных миль\n";
    cout << km << " км = " << nautical_miles << " морских миль";*/

    // 5. Ввести с клавиатуры 3-значное число и «перевернуть» его (например, ввести 357 – получить и вывести 753).
    /*int num;
    cout << "Введите трёхзначное число: ";
    cin >> num;
    int first = num / 100;
    int second = (num / 10) % 10;
    int third = num % 10;
    int reversed_num = third * 100 + second * 10 + first;
    cout << "Перевёрнутое число: " << reversed_num;*/

    // 6. Ввести 4-значное число и подсчитать сумму первой и третьей цифры и разность второй и четвертой цифры.
    /*int num;
    cout << "Введите четырёхзначное число: ";
    cin >> num;
    int first = num / 1000;
    int second = (num / 100) % 10;
    int third = (num / 10) % 10;
    int fourth = num % 10;
    int sum = first + third;
    int dif = second - fourth;
    cout << "Сумма первой и третьей цифры: " << sum << "\n";
    cout << "Разность второй и четвёртой цифры: " << dif;*/

    // 7. Ввести с клавиатуры 3-значное число и удалить из него среднюю цифру (например, ввести 3, 5, 7 – получить и вывести число 37).
    /*int num;
    cout << "Введите трёхзначное число: ";
    cin >> num;
    int first = num / 100;
    int third = num % 10;
    int new_num = first * 10 + third;
    cout << "Ваше число: " << new_num;*/

    // 8. Ввести с клавиатуры два 3-значных числа и поменять у них средние цифры (например, ввести 357  и 702 – получить и вывести числа  307 и 752).
    int num1, num2;
    cout << "Введите первое трёхзначное число: ";
    cin >> num1;
    cout << "Введите второе трёхзначное число: ";
    cin >> num2;
    int first1 = num1 / 100;
    int second1 = (num1 / 10) % 10;
    int third1 = num1 % 10;
    int first2 = num2 / 100;
    int second2 = (num2 / 10) % 10;
    int third2 = num2 % 10;
    int new_num1 = first1 * 100 + second2 * 10 + third1;
    int new_num2 = first2 * 100 + second1 * 10 + third2;
    cout << "Новое первое число: " << new_num1 << "\n";
    cout << "Новое второе число: " << new_num2;
}
