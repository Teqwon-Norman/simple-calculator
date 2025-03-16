#include <iostream>
#include <iomanip>

#include "calculator.h"

int main()
{
    int mode;
    Calculator calc;

    do {
        mode = calc.menu();
        double a {}, b {};

        if (calc.getResult() != 0) {
            a = calc.getResult();
        }

        switch (mode) {
            case 1:
                std::cout << "\n****************** ADDING ********************" << std::endl;
                if (!a) {
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
                std::cin.ignore(INT64_MAX, '\n');
                calc.add(a, b);
                break;

            case 2:
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
                    std::cout << "ERROR: Please enter a number\n";
                    std::cin.clear();
                    std::cin.ignore(INT64_MAX, '\n');
                }

                if (b == 0) {
                    calc.clearResult();
                    calc.clearScreen();
                } else {
                    calc.divide(a, b);
                    break;
                }
                break;

            case 5:
                std::cout << "\n****************** SQUARING *******************" << std::endl;
                if (a == 0) {
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
                std::cout << "\n****************** SQUARE ROOT *******************" << std::endl;
                if (a == 0) {
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
                std::cout << "\nThank you for using Calculator++\n";
                break;

            default:
                std::cout << "Please choose an option (1 - 8)" << std::endl;
                break;
        }
    } while (mode != 8);
    return 0;
}