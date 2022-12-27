#include <iostream>
#include "calculator.h"

Calculator::Calculator()
    /* When we create an instance of the Calculator object
       we set our result variable to 0 */
{
    result = 0;
}

Calculator::~Calculator() = default; // Default implementation of a destructor

int Calculator::menu()
    /* Displays a menu to the terminal that instructs the user on
       how to use the calculator for certain tasks,
      just like buttons on a calculator. */
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
    /* Takes in two doubles and adds the numbers
     * saving/updating the result in our private memory variable */
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
    /* Takes in two doubles and subtracts the numbers
     * saving/updating the result in our private memory variable */
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
    /* Takes in two doubles and multiplies the numbers
     * saving/updating the result in our private memory variable */
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
    /* Takes in two doubles and divides the numbers
     * saving/updating the result in our private memory variable. */
{
        result = a / b;
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t\t" << a << " / " << b << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();
}

void Calculator::square(double &a) {
    /* Takes in a number and squares it if the result is zero,
     * otherwise it squares the current result and updates it.  */
        result = a * a;
        clearScreen();
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t\t" << a << " ^ " << a << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();
}

void Calculator::sqrt(double &a)
    /* Takes in a number and gets the square root of it if the result is zero,
     * otherwise it gets the square root of the current result and updates it.  */
{
        result = std::sqrt(a);
        clearScreen();
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t" << "SQUARE ROOT " << a << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();
}

void Calculator::clearScreen()
    /* Prints out 50 newline characters to act as
     * if we are clearing the output from the terminal. */
{
    std::cout << std::string(50, '\n');
}

void Calculator::pauseExecution()
{
    std::string input;
    std::cout << "type any key and hit enter to continue..." << std::endl;

    while (input.size() < 1) { std::cin >> input; }
}

double Calculator::zeroExceptionHandling(double &n)
    /* Catches and handles the divide by zero exception
     * by returning the string value "Error" when a user
     * tries to divide by zero */
{
    if (n == 0) {
        throw "Error";
    } else {
        return n;
    }
}