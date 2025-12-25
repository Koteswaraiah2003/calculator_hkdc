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
<<<<<<< HEAD
    cout << "from Dixith" << endl;
=======
    cout << "from Chetan" << endl;
>>>>>>> b711d10 (From chetan M S:)
    return a + b;
}

int Calculator::subtract(int a, int b)
{
<<<<<<< HEAD
    cout << "from Dixith" << endl;
=======
    cout << "from Chetan" << endl;
>>>>>>> b711d10 (From chetan M S:)
    return a - b;
}

int Calculator::multiply(int a, int b)
{
<<<<<<< HEAD
     cout << "from Dixith" << endl;
=======
     cout << "from Chetan" << endl;
>>>>>>> b711d10 (From chetan M S:)
    return a * b;
}

double Calculator::divide(int a, int b)
{
<<<<<<< HEAD
    cout << "from Dixith" << endl;
=======
    cout << "from Chetan" << endl;
>>>>>>> b711d10 (From chetan M S:)
    if (b == 0)
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return (a) / b;
}
