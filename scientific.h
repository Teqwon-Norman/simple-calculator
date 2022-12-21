#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H

#include <string>
#include <array>
#include <cmath>
#include "calculator.h"

class Scientific : public Calculator
{
private:
    double result;

public:
    Scientific() { result = 0.0; };
    ~Scientific();

    void sin();
    void cos();
    void tan();
    void ln();
    void log();
    void abs();
    void pow();

    void menu() const;
};
#endif