#include <iostream>
#include "calculator.h"

int Calculator::menu() const
{
    int mode;

    std::cout << "**********************************************" << std::endl;
    std::cout << "**************** CALCULATOR++ ****************" << std::endl;
    std::cout << "**********************************************" << std::endl;
    std::cout << "Select a mode below:" << std::endl;
    std::cout << "1.\tAdd\n2.\tSubtract\n3.\tMultiply\n4.\tDivide\n5.\tSquare\n6.\tSquare Root\n7.\tDeactivate Memory\n8.\tExit" << std::endl;
    std::cout << "\n";

    if (useMemory) {
        std::cout << "Memory is " << saveMemoryActivated() << ", feel free to disable this feature." << std::endl;
    } else {
        std::cout << "Memory is " << saveMemoryActivated() << ", feel free to enable this feature." << std::endl;
    }

    while(!(std::cin >> mode)) {
        std::cout << "ERROR: Please select an option from the menu above" << std::endl;
        std::cin.clear();
        std::cin.ignore(INT64_MAX, '\n');
    }

    return mode;
}

void Calculator::add()
{
    // if memory is False we will execute this statement to ask user for 2 numbers
    if (!useMemory) {
        double a, b;
        std::cout << "**************** ADDING ****************" << std::endl;
        std::cout << "Enter first number: ";
        while(!(std::cin >> a)) {
            std::cout << "ERROR: Please enter a number" << std::endl;
            std::cin.clear();
            std::cin.ignore(INT64_MAX, '\n');
        }
        std::cout << "Enter second number: ";
        while(!(std::cin >> b)) {
            std::cout << "ERROR: Please enter a number" << std::endl;
            std::cin.clear();
            std::cin.ignore(INT64_MAX, '\n');
        }

        result = a + b;
        clearScreen();
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t\t" << a << " + " << b << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();

    } else {
        /* if memory is True we will execute this code block and also check if the previous result was
         * 0.0 or not for instance a person hasn't made its first operation yet memory wouldn't be carrying
         * over anything so the user should still enter 2 numbers
        */
        std::string cont;
        if (memory == 0.0 || cont.empty()) {
            if (memory == 0.0) {
                std::cout << "Previous result was 0.0, you may or may not have executed a mathematical operation beforehand\n"
                             "Would you like to use the memory value here or input a value for it? [y or n]" << std::endl;
                std::cin >> cont;
                std::cin.ignore();
            } else {
                cont = "y";
            }
        }

        if (cont == "y") {
            double b;
            std::cout << "**************** ADDING ****************" << std::endl;
            std::cout << "Enter a number:";
            while(!(std::cin >> b)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }

            result = memory + b;
            clearScreen();
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t\t" << memory << " + " << b << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            memory += result;
            pauseExecution();
            clearScreen();

        } else {
            double a, b;
            std::cout << "**************** ADDING ****************" << std::endl;
            std::cout << "Enter first number: ";
            while(!(std::cin >> a)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }
            std::cout << "Enter second number: ";
            while(!(std::cin >> b)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }

            result = a + b;
            clearScreen();
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t\t" << a << " + " << b << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            pauseExecution();
            clearScreen();
        }
    }
}

void Calculator::subtract()
{
    // if memory is False we will execute this statement to ask user for 2 numbers
    if (!useMemory) {
        double a, b;
        std::cout << "**************** SUBTRACTING ****************" << std::endl;
        std::cout << "Enter first number: ";
        while(!(std::cin >> a)) {
            std::cout << "ERROR: Please enter a number" << std::endl;
            std::cin.clear();
            std::cin.ignore(INT64_MAX, '\n');
        }
        std::cout << "Enter second number: ";
        while(!(std::cin >> b)) {
            std::cout << "ERROR: Please enter a number" << std::endl;
            std::cin.clear();
            std::cin.ignore(INT64_MAX, '\n');
        }

        result = a - b;
        clearScreen();
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t\t" << a << " - " << b << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();

    } else {
        std::string cont;
        if (memory == 0.0 || cont.empty()) {
            if (memory == 0.0) {
                std::cout << "Previous result was 0.0, you may or may not have executed a mathematical operation beforehand\n"
                             "Would you like to use the memory value here or input a value for it? [y or n]" << std::endl;
                std::cin >> cont;
                std::cin.ignore();
            } else {
                cont = "y";
            }
        }

        if (cont == "y") {
            double b;
            std::cout << "**************** SUBTRACTING ****************" << std::endl;
            std::cout << "Enter a number:";
            while(!(std::cin >> b)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }

            result = memory - b;
            clearScreen();
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t\t" << memory << " - " << b << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            memory -= result;
            pauseExecution();
            clearScreen();

        } else {
            double a, b;
            std::cout << "**************** SUBTRACTING ****************" << std::endl;
            std::cout << "Enter first number: ";
            while(!(std::cin >> a)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }
            std::cout << "Enter second number: ";
            while(!(std::cin >> b)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }

            result = a - b;
            clearScreen();
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t\t" << a << " - " << b << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            pauseExecution();
            clearScreen();
        }
    }
}

void Calculator::multiply()
{
    // if memory is False we will execute this statement to ask user for 2 numbers
    if (!useMemory) {
        double a, b;
        std::cout << "**************** MULTIPLYING ****************" << std::endl;
        std::cout << "Enter first number: ";
        while(!(std::cin >> a)) {
            std::cout << "ERROR: Please enter a number" << std::endl;
            std::cin.clear();
            std::cin.ignore(INT64_MAX, '\n');
        }
        std::cout << "Enter second number: ";
        while(!(std::cin >> b)) {
            std::cout << "ERROR: Please enter a number" << std::endl;
            std::cin.clear();
            std::cin.ignore(INT64_MAX, '\n');
        }

        result = a * b;
        clearScreen();
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t\t" << a << " * " << b << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();

    } else {
        std::string cont;
        if (memory == 0.0 || cont.empty()) {
            if (memory == 0.0) {
                std::cout << "Previous result was 0.0, you may or may not have executed a mathematical operation beforehand\n"
                             "Would you like to use the memory value here or input a value for it? [y or n]" << std::endl;
                std::cin >> cont;
                std::cin.ignore();
            } else {
                cont = "y";
            }
        }

        if (cont == "y") {
            double b;
            std::cout << "**************** MULTIPLYING ****************" << std::endl;
            std::cout << "Enter a number:";
            while(!(std::cin >> b)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }

            result = memory * b;
            clearScreen();
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t\t" << memory << " * " << b << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            memory += result;
            pauseExecution();
            clearScreen();

        } else {
            double a, b;
            std::cout << "**************** MULTIPLYING ****************" << std::endl;
            std::cout << "Enter first number: ";
            while(!(std::cin >> a)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }
            std::cout << "Enter second number: ";
            while(!(std::cin >> b)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }

            result = a * b;
            clearScreen();
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t\t" << a << " * " << b << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            pauseExecution();
            clearScreen();
        }
    }
}

void Calculator::divide()
{
    if (!useMemory) {
        double a, b;
        std::cout << "**************** DIVIDING ****************" << std::endl;
        std::cout << "Enter first number: ";
        while(!(std::cin >> a)) {
            std::cout << "ERROR: Please enter a number" << std::endl;
            std::cin.clear();
            std::cin.ignore(INT64_MAX, '\n');
        }
        std::cout << "Enter second number: ";
        while(!(std::cin >> b)) {
            std::cout << "ERROR: Please enter a number" << std::endl;
            std::cin.clear();
            std::cin.ignore(INT64_MAX, '\n');
        }

        result = zeroExceptionHandling(b);
        if (result == 0)
            throw "ERROR";

        clearScreen();
        result = a / b;
        memory += result;
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t\t" << a << " / " << b << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();
    } else {
        std::string cont;
        if (memory == 0.0 || cont.empty()) {
            if (memory == 0.0) {
                std::cout << "Previous result was 0.0, you may or may not have executed a mathematical operation beforehand\n"
                             "Would you like to use the memory value here or input a value for it? [y or n]" << std::endl;
                std::cin >> cont;
                std::cin.ignore();
            } else {
                cont = "y";
            }
        }

        if (cont == "y") {
            double b;
            std::cout << "**************** DIVIDING ****************" << std::endl;
            std::cout << "Enter a number:";
            while(!(std::cin >> b)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }

            result = zeroExceptionHandling(b);
            if (result == 0)
                throw "ERROR";

            clearScreen();
            result = memory / b;
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t\t" << memory << " / " << b << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            memory /= b;
            pauseExecution();
            clearScreen();

        } else {
            double a, b;
            std::cout << "**************** DIVIDING ****************" << std::endl;
            std::cout << "Enter first number: ";
            while(!(std::cin >> a)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }
            std::cout << "Enter second number: ";
            while(!(std::cin >> b)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }

            result = zeroExceptionHandling(b);
            if (result == 0)
                throw "ERROR";

            clearScreen();
            result = a / b;
            memory += result;
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t\t" << a << " / " << b << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            pauseExecution();
            clearScreen();
        }
    }

}

void Calculator::square() {
    if (!useMemory) {
        double a;
        std::cout << "**************** SQUARING ****************" << std::endl;
        std::cout << "Enter a number: ";
        while (!(std::cin >> a)) {
            std::cout << "ERROR: Please enter a number" << std::endl;
            std::cin.clear();
            std::cin.ignore(INT64_MAX, '\n');
        }

        result = a * a;
        memory += result;
        clearScreen();
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t\t" << a << " ^ " << a << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();

    } else {
        std::string cont;
        if (memory == 0.0 || cont.empty()) {
            if (memory == 0.0) {
                std::cout
                        << "Previous result was 0.0, you may or may not have executed a mathematical operation beforehand\n"
                           "Would you like to use the memory value here or input a value for it? [y or n]" << std::endl;
                std::cin >> cont;
                std::cin.ignore();
            } else {
                cont = "y";
            }
        }

        if (cont == "y") {
            double a;

            result = memory * memory;
            clearScreen();
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t\t" << memory << " ^ " << memory << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            memory = result;
            pauseExecution();
            clearScreen();

        } else {
            double a;
            std::cout << "**************** SQUARING ****************" << std::endl;
            std::cout << "Enter first number: ";
            while (!(std::cin >> a)) {
                std::cout << "ERROR: Please enter a number" << std::endl;
                std::cin.clear();
                std::cin.ignore(INT64_MAX, '\n');
            }

            result = a * a;
            clearScreen();
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t\t" << a << " ^ " << a << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            pauseExecution();
            clearScreen();
        }
    }
}

void Calculator::sqrt()
{
    if (!useMemory) {
        double a;
        std::cout << "**************** SQ.ROOT ****************" << std::endl;
        std::cout << "Enter a number: ";
        std::cin >> a;

        result = std::sqrt(a);
        memory += result;
        clearScreen();
        std::cout << "***************** OUTPUT ****************" << std::endl;
        std::cout << "\t" << "SQUARE ROOT " << a << " = " << result << std::endl;
        std::cout << "*****************************************" << std::endl;
        pauseExecution();
        clearScreen();

    } else {
        std::string cont;
        if (memory == 0.0 || cont.empty()) {
            if (memory == 0.0) {
                std::cout
                        << "Previous result was 0.0, you may or may not have executed a mathematical operation beforehand\n"
                           "Would you like to use the memory value here or input a value for it? [y or n]" << std::endl;
                std::cin >> cont;
                std::cin.ignore();
            } else {
                cont = "y";
            }
        }

        if (cont == "y") {
            result = std::sqrt(memory);
            clearScreen();
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t" << "SQUARE ROOT " << memory << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            memory = result;
            pauseExecution();
            clearScreen();

        } else {
            double a;
            std::cout << "**************** SQ.ROOT ****************" << std::endl;
            std::cout << "Enter a number: ";
            std::cin >> a;

            result = std::sqrt(a);
            clearScreen();
            std::cout << "***************** OUTPUT ****************" << std::endl;
            std::cout << "\t" << "SQUARE ROOT " << a << " = " << result << std::endl;
            std::cout << "*****************************************" << std::endl;
            pauseExecution();
            clearScreen();
        }
    }
}

void Calculator::clearScreen() const {
    std::cout << std::string(30, '\n');
}

void Calculator::pauseExecution() {
    std::string input;
    std::cout << "type any key and hit enter to continue..." << std::endl;

    while (input.empty()) { std::cin >> input; }
}

double Calculator::zeroExceptionHandling(double n) {
    if (n == 0) {
        throw "Error";
    } else {
        return n;
    }
}

std::string Calculator::saveMemoryActivated() const {
    if (useMemory) {
        return "Activated";
    } return "Deactivated";
}