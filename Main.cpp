#include <iostream>
#include "class.h"

using namespace std;

int main() {
    EquationSolver eq;

    eq.setInterval(0, 1);
    eq.setTolerance(0.001);

    double x;

    if (eq.bisection(x) == 0)
        cout << "Дихотомія: " << x << endl;

    if (eq.newton(x) == 0)
        cout << "Ньютон: " << x << endl;

    return 0;
}