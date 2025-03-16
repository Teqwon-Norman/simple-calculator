#include <iostream>
#include <iomanip>

#include "calculator.h"

static void printResult(
    double& a,
    double& b,
    double& result,
    std::string sign) {
    std::cout << "\t\t" << a << sign << b << " = "
        << std::fixed << std::setprecision(0) << result << "\n";
}

Calculator::Calculator() {
    result = 0;
}

Calculator::~Calculator() = default;

int Calculator::menu() {
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

void Calculator::add(double &a, double &b) {
    result = a + b;
    std::string sign = "+";
    clearScreen();
    std::cout << "***************** OUTPUT ****************" << std::endl;
    printResult(a, b, result, sign);
    std::cout << "*****************************************" << std::endl;
    clearScreen();
}

void Calculator::subtract(double &a, double &b) {
    result = a - b;
    std::string sign = "-";
    clearScreen();
    std::cout << "***************** OUTPUT ****************" << std::endl;
    printResult(a, b, result, sign);
    std::cout << "*****************************************" << std::endl;
    clearScreen();
}

void Calculator::multiply(double &a, double &b) {
    result = a * b;
    std::string sign = "*";
    clearScreen();
    std::cout << "***************** OUTPUT ****************" << std::endl;
    printResult(a, b, result, sign);
    std::cout << "*****************************************" << std::endl;
    clearScreen();
}

void Calculator::divide(double &a, double &b) {
    result = a / b;
    std::string sign = "/";
    std::cout << "***************** OUTPUT ****************" << std::endl;
    printResult(a, b, result, sign);
    std::cout << "*****************************************" << std::endl;
    clearScreen();
}

void Calculator::square(double &a) {
    result = a * a;
    clearScreen();
    std::cout << "***************** OUTPUT ****************" << std::endl;
    std::cout << "\t\t" << a << " ^ " << a << " = "
        << std::fixed << std::setprecision(0) << result << "\n";
    std::cout << "*****************************************" << std::endl;
    clearScreen();
}

void Calculator::sqrt(double &a) {
    result = std::sqrt(a);
    clearScreen();
    std::cout << "***************** OUTPUT ****************" << std::endl;
    std::cout << "\t" << "SQUARE ROOT " << a << " = "
        << std::fixed << std::setprecision(0) << result << "\n";
    std::cout << "*****************************************" << std::endl;
    clearScreen();
}