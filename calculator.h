#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>

class Calculator
{
private:
    double result;

public:
    Calculator();
    ~Calculator();

    void add(double& a, double& b);
    void subtract(double& a, double& b);
    void multiply(double& a, double& b);
    void divide(double& a, double& b);
    void square(double& a);
    void sqrt(double& a);
    static void clearScreen() { std::system("clear"); }
    double getResult() { return result; };
    void displayMemory() { std::cout << "Result: " << result << std::endl;  }
    void clearResult() { result = 0; };
    int menu();
};
#endif