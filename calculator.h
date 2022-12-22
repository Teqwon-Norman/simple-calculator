#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <string>
#include <cmath>

class Calculator
{
private:
    double result;

public:

    Calculator(); // constructor
    ~Calculator(); // destructor

    void add(double& a, double& b);
    void subtract(double& a, double& b);
    void multiply(double& a, double& b);
    void divide(double& a, double& b);
    void square(double& a);
    void sqrt(double& a);
    static void clearScreen() ;
    static void pauseExecution();
    void clearResult() { result = 0.0; };
    static double zeroExceptionHandling(double& n);
    static int menu();
};
#endif