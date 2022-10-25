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
    Scientific();

    void sin();
    void cos();
    void tan();
    void ln();
    void log();
    void abs();
    void pow();

    virtual void menu() const override;
    virtual void exit() const override;
    virtual void parseOperation(const int &) override;
};
#endif