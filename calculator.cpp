#include <iostream>
#include "calculator.h"

Calculator::Calculator() { // constructor implementation
    result = 0;
}

Calculator::~Calculator() = default; // defines a trivial destructor for me

int Calculator::menu()
{
    int mode;

    std::cout << "**********************************************" << std::endl;
    std::cout << "**************** CALCULATOR++ ****************" << std::endl;
    std::cout << "**********************************************" << std::endl;
    std::cout << "Select a mode below:" << std::endl;
    std::cout << "1.\tAdd\n2.\tSubtract\n3.\tMultiply\n4.\tDivide\n5.\tSquare\n6.\tSquare Root\n7.\tClear\n8.\tExit" << std::endl;
    std::cout << "**********************************************" << std::endl;
    displayMemory();
    std::cout << "**********************************************" << std::endl;
    std::cout << "\n";

    while(!(std::cin >> mode)) {
        std::cout << "ERROR: Please select an option from the menu above" << std::endl;
        std::cin.clear();
        std::cin.ignore(INT64_MAX, '\n');
    }
    return mode;
}

void Calculator::add(double &a, double &b)
{
    result = a + b;
    clearScreen();
    std::cout << "***************** OUTPUT ****************" << std::endl;
    std::cout << "\t\t" << a << " + " << b << " = " << result << std::endl;
    std::cout << "*****************************************" << std::endl;
    pauseExecution();
    clearScreen();
}

void Calculator::subtract(double &a, double &b)
{
    result = a - b;
    clearScreen();
    std::cout << "***************** OUTPUT ****************" << std::endl;
    std::cout << "\t\t" << a << " - " << b << " = " << result << std::endl;
    std::cout << "*****************************************" << std::endl;
    pauseExecution();
    clearScreen();
}

void Calculator::multiply(double &a, double &b)
{
        result = a * b;
        clearScreen();
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t\t" << a << " * " << b << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();
}

void Calculator::divide(double &a, double &b)
{
        result = a / b;
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t\t" << a << " / " << b << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();
}

void Calculator::square(double &a) {
        result = a * a;
        clearScreen();
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t\t" << a << " ^ " << a << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();
}

void Calculator::sqrt(double &a)
{
        result = std::sqrt(a);
        clearScreen();
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t" << "SQUARE ROOT " << a << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();
}

void Calculator::clearScreen() {
    std::cout << std::string(30, '\n');
}

void Calculator::pauseExecution() {
    std::string input;
    std::cout << "type any key and hit enter to continue..." << std::endl;

    while (input.empty()) { std::cin >> input; }
}

double Calculator::zeroExceptionHandling(double &n) {
    if (n == 0) {
        throw "Error";
    } else {
        return n;
    }
}