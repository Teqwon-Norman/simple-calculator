#include <iostream>
#include <typeinfo>
#include "calculator.h"

// Constructor
// Initialize data members to 0 doubles

Calculator::Calculator() : result(0.0), mem(0.0) {}

void Calculator::welcome() const
{
    std::cout << "\n\nEnter an operation 1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square\n6. Square Root\n7. Exit";
}

void Calculator::add()
{
    std::string a, b;
    std::cout << "Enter the first number";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    result = parseInput(a) + parseInput(b);
    std::cout << "The result is " << result;
}

void Calculator::subtract()
{
    std::string a, b;
    std::cout << "Enter the first number";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    result = parseInput(a) - parseInput(b);
    std::cout << "The result is " << result;
}

void Calculator::multiply()
{
    std::string a, b;
    std::cout << "Enter the first number";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    result = parseInput(a) * parseInput(b);
    std::cout << "The result is " << result;
}

void Calculator::divide()
{
    std::string a, b;
    std::cout << "Enter the first number";
    std::cin >> a;
    std::cout << "Enter the second number";
    std::cin >> b;

    result = parseInput(a) / parseInput(b);
    std::cout << "The result is " << result;
}

void Calculator::square()
{
    std::string a;
    std::cout << "Enter a number";
    std::cin >> a;

    double parsedA = parseInput(a);
    result = parsedA * parsedA;
    std::cout << "The result is " << result;
}

void Calculator::sqrt()
{
    std::string a;
    std::cout << "Enter a number";
    std::cin >> a;

    result = std::sqrt(parseInput(a));
    std::cout << "The result is " << result;
}

double Calculator::parseInput(const std::string &value) const
{
    // saving the string value as a double IF it is a string that contains an integer value
    double check = std::stod(value);
    // then check to see if the value is a double to return otherwise we just initialize the value to 0 just so itll compile bug free
    if (typeid(check).name() == typeid(double).name())
    {
        return check;
    }

    else
    {
        return 0;
    }
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
        // exit();
        break;
    }
}