#include <iostream>
#include "scientific.h"

void Scientific::menu() const
{
    std::cout << "\n\nEnter an operation 1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square\n6. Square Root\n7. Exit";
}

void Scientific::sin()
{
    double a, b;
    std::cout << "Enter the first number";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    result = a + b;
    std::cout << "The result is " << result;
}

void Scientific::cos()
{
    double a, b;
    std::cout << "Enter the first number";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    result = a - b;
    std::cout << "The result is " << result;
}

void Scientific::tan()
{
    double a, b;
    std::cout << "Enter the first number";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    result = a * b;
    std::cout << "The result is " << result;
}

void Scientific::ln()
{
    double a;
    std::cout << "Enter the first number";
    std::cin >> a;

    result = std::log(a);
    std::cout << "The result is " << result;
}

void Scientific::log()
{
    double a, b;
    std::cout << "Enter the base: ";
    std::cin >> a;
    std::cout << "Enter the exponent: ";
    std::cin >> b;

    result = std::log(a) / std::log(b);
    std::cout << "The result is " << result;
}

void Scientific::abs()
{
    double a;
    std::cout << "Enter a number";
    std::cin >> a;

    result = std::abs(a);
    std::cout << "The result is " << result;
}

void Scientific::pow()
{
    double a, b;
    std::cout << "Enter the base: ";
    std::cin >> a;
    std::cout << "Enter the exponent: ";
    std::cin >> b;

    result = std::pow(a, b);
    std::cout << "The result is " << result;
}

void Scientific::exit() const
{
    std::cout << "\nThank you for using Calculator++";
}

void Scientific::parseOperation(const int &operation)
{
    int operation;
    switch (operation)
    {
    case 1:
        add();
        break;

    case 2:
        subtract();
        break;

    case 3:
        multiply();
        break;

    case 4:
        divide();
        break;

    case 5:
        square();
        break;

    case 6:
        sqrt();
        break;

    case 7:
        exit();
        break;
    }
}