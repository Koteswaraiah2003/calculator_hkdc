#include "Calculator.h"

// Calculator::Calculator() {}

void Calculator::menu()
{
    int x = 10, y = 5;
    Calculator calc;
    cout << "Addition: " << calc.add(x, y) << endl;
    cout << "Subtraction: " << calc.subtract(x, y) << endl;
    cout << "Multiplication: " << calc.multiply(x, y) << endl;
    cout << "Division: " << calc.divide(x, y) << endl;

}

int Calculator::add(int a, int b)
{

    cout << "from Koti" << endl;
    return a + b;
}

int Calculator::subtract(int a, int b)
{

    cout << "from Koti" << endl;
    return a - b;
}

int Calculator::multiply(int a, int b)
{

     cout << "from Koti" << endl;

    return a * b;
}

double Calculator::divide(int a, int b)
{

    cout << "from Koti" << endl;

    if (b == 0)
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }

    return (a) / b;

    return static_cast<double>(a) / b;

}
