#include <iostream>
#include "class.h"
#include <windows.h>

using namespace std;

int main() {

    SetConsoleOutputCP(65001);

    EquationSolver eq;

    eq.setInterval(0, 2);
    eq.setTolerance(0.001);

    double x;

    if (eq.bisection(x) == 0)
        cout << "Дихотомія: " << x << endl;

    if (eq.newton(x) == 0)
        cout << "Ньютон: " << x << endl;

    return 0;
}