#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <cmath>

class Calculator
{
private:
    double result;
    double memory;
    bool useMemory;

public:

    Calculator() // constructor
    {
        result = 0.0;
        memory = 0.0;
        useMemory = true;
    }

    void add();
    void subtract();
    void multiply();
    void divide();
    void square();
    void sqrt();
    void clearScreen() const;
    void pauseExecution();
    double zeroExceptionHandling(double n);
    void deactivateMemory() { useMemory = false; };
    std::string saveMemoryActivated() const;
    int menu() const;

};
#endif