#include <iostream>
#include "calculator.h" // We are importing our calculator header file here

int main()
{
    int mode;
    Calculator calc; // Object instance of Calculator class named calc which sets our result value to zero upon creation

    // Do-while loop and Switch case statements to structure our console application
    do {
        mode = calc.menu();
        double a {}, b {};

        if (calc.getResult() != 0) {
            a = calc.getResult();
        }

        switch (mode) {
            case 1:
                calc.clearScreen();
                std::cout << "\n****************** ADDING ********************" << std::endl;
                if (!a) {
                    std::cout << "Enter first number: ";
                    /* This while loop you see throughout the code is our user input validation
                       We use this to make sure the user enters nothing except numbers
                       This is a basic security issue that should always be handled */
                    while (!(std::cin >> a)) {
                        std::cout << "ERROR: Please enter a number" << std::endl;
                        std::cin.clear();
                        std::cin.ignore(INT64_MAX, '\n');
                    }
                    std::cin.ignore(INT64_MAX, '\n');
                }

                std::cout << "Enter second number: ";
                while (!(std::cin >> b)) {
                    std::cout << "ERROR: Please enter a number" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(INT64_MAX, '\n');
                }
                std::cin.ignore(INT64_MAX, '\n');
                calc.add(a, b);
                break;

            case 2:
                calc.clearScreen();
                std::cout << "\n****************** SUBTRACTING *******************" << std::endl;
                if (a == 0) {
                    std::cout << "Enter first number: ";
                    while (!(std::cin >> a)) {
                        std::cout << "ERROR: Please enter a number" << std::endl;
                        std::cin.clear();
                        std::cin.ignore(INT64_MAX, '\n');
                    }
                    std::cin.ignore(INT64_MAX, '\n');
                }

                std::cout << "Enter second number: ";
                while (!(std::cin >> b)) {
                    std::cout << "ERROR: Please enter a number" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(INT64_MAX, '\n');
                }
                calc.subtract(a, b);
                break;

            case 3:
                calc.clearScreen();
                std::cout << "\n****************** MULTIPLYING *******************" << std::endl;
                if (a == 0) {
                    std::cout << "Enter first number: ";
                    while (!(std::cin >> a)) {
                        std::cout << "ERROR: Please enter a number" << std::endl;
                        std::cin.clear();
                        std::cin.ignore(INT64_MAX, '\n');
                    }
                    std::cin.ignore(INT64_MAX, '\n');
                }

                std::cout << "Enter second number: ";
                while (!(std::cin >> b)) {
                    std::cout << "ERROR: Please enter a number" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(INT64_MAX, '\n');
                }
                calc.multiply(a, b);
                break;

            case 4:
                calc.clearScreen();
                std::cout << "\n****************** DIVIDING *******************" << std::endl;
                if (a == 0) {
                    std::cout << "Enter first number: ";
                    while (!(std::cin >> a)) {
                        std::cout << "ERROR: Please enter a number" << std::endl;
                        std::cin.clear();
                        std::cin.ignore(INT64_MAX, '\n');
                    }
                    std::cin.ignore(INT64_MAX, '\n');
                }

                std::cout << "Enter second number: ";
                while (!(std::cin >> b)) {
                    std::cout << "ERROR: Please enter a number" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(INT64_MAX, '\n');
                }

                b = calc.zeroExceptionHandling(b);
                if (b == 0)
                    throw "ERROR";
                try {
                    calc.divide(a, b);
                } catch (const char *divideByZeroError) {
                    calc.clearScreen();
                    std::cout << "*************** OUTPUT **************" << std::endl;
                    std::cout << "\t\t" << divideByZeroError << std::endl;
                    std::cout << "*************************************" << std::endl;
                    calc.pauseExecution();
                    calc.clearScreen();
                }
                break;

            case 5:
                calc.clearScreen();
                std::cout << "\n****************** SQUARING *******************" << std::endl;
                if (calc.getResult() != 0) {
                    a =  calc.getResult();
                    calc.square(a);
                }

                else if (a == 0) {
                    std::cout << "Enter a number: ";
                    while (!(std::cin >> a)) {
                        std::cout << "ERROR: Please enter a number" << std::endl;
                        std::cin.clear();
                        std::cin.ignore(INT64_MAX, '\n');
                    }
                    std::cin.ignore(INT64_MAX, '\n');
                }
                calc.square(a);
                break;

            case 6:
                calc.clearScreen();
                std::cout << "\n****************** SQUARE ROOT *******************" << std::endl;
                if (calc.getResult() != 0) {
                    a =  calc.getResult();
                    calc.sqrt(a);
                }

                else if (a == 0) {
                    std::cout << "Enter a number: ";
                    while (!(std::cin >> a)) {
                        std::cout << "ERROR: Please enter a number" << std::endl;
                        std::cin.clear();
                        std::cin.ignore(INT64_MAX, '\n');
                    }
                    std::cin.ignore(INT64_MAX, '\n');
                }
                calc.sqrt(a);
                break;

            case 7:
                calc.clearResult();
                calc.clearScreen();
                break;

            case 8:
                calc.clearScreen();
                std::cout << "\nThank you for using Calculator++";
                break;

            default:
                std::cout << "Please choose an option (1 - 8)" << std::endl;
                break;
        }
    } while (mode != 8);
    return 0;
}