#include <iostream>
#include <cstdlib>
#include "calculator.h"

int main()
{
    int mode;
    Calculator calc;

    do {
        mode = calc.menu();

        switch (mode)
        {
            case 1:
                calc.add();
                break;

            case 2:
                calc.subtract();
                break;

            case 3:
                calc.multiply();
                break;

            case 4:
                try {
                    calc.divide();
                } catch (const char * divideByZeroError) {
                    calc.clearScreen();
                    std::cout << "*************** OUTPUT **************" << std::endl;
                    std::cout << "\t\t" << divideByZeroError << std::endl;
                    std::cout << "*************************************" << std::endl;
                    calc.pauseExecution();
                    calc.clearScreen();
                }
                break;

            case 5:
                calc.square();
                break;

            case 6:
                calc.sqrt();
                break;

            case 7:
                calc.deactivateMemory();
                calc.clearScreen();
                break;

            case 8:
                std::cout << "\nThank you for using Calculator++";
                break;

            default:
                std::cout << "Please choose an option (1 - 7)" << std::endl;
        }
    }
    while (mode != 8);

    return 0;
}