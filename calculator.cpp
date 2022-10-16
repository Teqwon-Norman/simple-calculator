#include <iostream>
#include "calculator.h"

// Constructor
// Initialize data members to 0 doubles

Calculator::Calculator() : result(0.0), mem(0.0) {}

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

void Calculator::setMem()
{
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;

    mem = parseInput(a);
    std::cout << "The mem is " << mem;
}

void Calculator::printMem() const
{
    std::cout << "The mem is " << mem;
}

double Calculator::parseInput(const std::string &input) const
{
    if (input == "result")
    {
        return result;
    }

    else if (input == "result")
    {
        return mem;
    }

    else
    {
        return std::stod(input);
    }
}

void Calculator::welcome() const
{
    std::cout << "\n\nEnter an operation (+, -, /, *, sqrt, square, change, setmem, printmem) or exit\n";
}

void Calculator::parseOperation(const std::string &input)
{
    // Do a switch case for operations here
}