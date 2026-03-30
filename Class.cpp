#include "class.h"
#include <cmath>
#include <iostream>

using namespace std;

EquationSolver::EquationSolver() {}
EquationSolver::~EquationSolver() {}

void EquationSolver::setInterval(double vol_a, double vol_b) {
    a = vol_a;
    b = vol_b;
}

void EquationSolver::setTolerance(double vol_eps) {
    eps = vol_eps;
}


double EquationSolver::function(double x) {
    return x*x/4 + x - 1.2502;
}


double EquationSolver::derivative(double x) {
    return x/2 + 1;
}

int EquationSolver::bisection(double &x) {
    double a_ = a;
    double b_ = b;
    double c;

    if (function(a_) * function(b_) >= 0) { //зміна знаку
        cout << "Немає кореня\n";
        return -1;
    }

    while ((b_ - a_) > eps) {
        c = (a_ + b_) / 2;

        if (function(a_) * function(c) < 0)
            b_ = c;
        else
            a_ = c;
    }

    x = (a_ + b_) / 2;
    return 0;
}

int EquationSolver::newton(double &x) {
    double xn = (a + b) / 2;
    int iter = 0;
    int maxIter = 1000;

    while (fabs(function(xn)) > eps && iter < maxIter) {
        double df = derivative(xn);

        if (fabs(df) < 1e-10) {
            cout << "Похідна = 0\n";
            return -1;
        }

        xn = xn - function(xn) / df;
        iter++;
    }

    x = xn;
    return 0;
}