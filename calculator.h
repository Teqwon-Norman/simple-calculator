#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <array>
#include <cmath>

class Calculator
{
private:
    double result;

public:
    Calculator();

    void add();
    void subtract();
    void multiply();
    void divide();
    void square();
    void sqrt();

    virtual void menu() const;
    virtual void exit() const;
    virtual void parseOperation(const int &);
};
#endif