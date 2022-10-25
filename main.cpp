#include <iostream>
#include <iomanip>
#include "calculator.h"

int main()
{
    Calculator calc;
    Calculator *calcP = &calc;

    // switch to scientific calculator goes here

    // calculator intro goes here

    calcP->menu();

    return 0;
}