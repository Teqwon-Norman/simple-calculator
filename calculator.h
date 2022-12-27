// Header Guards - prevents our header files from being included multiple times
#ifndef CALCULATOR_H
#define CALCULATOR_H

/*
 - Preprocessor Directives - we use these to import the functions from other header files
 - We will be creating one of these to import our calculator project in other files
*/
#include <iostream>
#include <string>
#include <cmath>

class Calculator // Our Calculator Object
{
private: // Private member variables/functions
    double result; // acts as memory for previous calculations

public:
    Calculator(); // constructor
    ~Calculator(); // destructor

    void add(double& a, double& b); // Adds two doubles
    void subtract(double& a, double& b); // Subtracts two doubles
    void multiply(double& a, double& b); // Multiplies two doubles
    void divide(double& a, double& b); // Divides two doubles
    void square(double& a); // Squares a double
    void sqrt(double& a); // Gets the square root of a double
    static void clearScreen(); // Creates a 50 newline character gap between previous outputs
    static void pauseExecution(); // Pauses the code for readability in terminal
    double getResult() { return result; }; // returns the values of result
    void displayMemory() { std::cout << "Result: " << result << std::endl;  } // displays our current running computations
    void clearResult() { result = 0; }; // Resets our running computations to zero
    static double zeroExceptionHandling(double& n); // Handles divideByZeroError
    int menu(); // Displays calculator menu
};
#endif