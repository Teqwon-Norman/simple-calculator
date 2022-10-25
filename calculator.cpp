#include <iostream>
#include <typeinfo>
#include "calculator.h"

void Calculator::menu() const
{
    std::cout << "\n\nEnter an operation 1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square\n6. Square Root\n7. Exit";
}

void Calculator::add()
{
    double a, b;
    std::cout << "Enter the first number";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    result = a + b;
    std::cout << "The result is " << result;
}

void Calculator::subtract()
{
    double a, b;
    std::cout << "Enter the first number";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    result = a - b;
    std::cout << "The result is " << result;
}

void Calculator::multiply()
{
    double a, b;
    std::cout << "Enter the first number";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    result = a * b;
    std::cout << "The result is " << result;
}

void Calculator::divide()
{
    double a, b;
    std::cout << "Enter the first number";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    result = a / b;
    std::cout << "The result is " << result;
}

void Calculator::square()
{
    double a;
    std::cout << "Enter a number";
    std::cin >> a;

    result = a * a;
    std::cout << "The result is " << result;
}

void Calculator::sqrt()
{
    double a;
    std::cout << "Enter a number";
    std::cin >> a;

    result = std::sqrt(a);
    std::cout << "The result is " << result;
}

void Calculator::exit() const
{
    std::cout << "\nThank you for using Calculator++";
}

void Calculator::parseOperation(const int &operation)
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