#ifndef SCIENTIFIC_H
#define SCIENTIFIC_H

#include <string>
#include <array>
#include <cmath>
#include "calculator.h"

class Scientific : public Calculator
{
    public:
        Scientific(); // constructor
        virtual ~Scientific() = default;
        virtual void menu() const override;
        virtual void parseOperation(const int &) override;

        // scientific operations
        void sin();
        void cos();
        void tan();
        void ln();
        void log();
        void abs();
        void pow();
};

#endif