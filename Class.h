#ifndef EQUATIONSOLVER_H
#define EQUATIONSOLVER_H

class EquationSolver {
private:
    double a, b;    // межі інтервалу
    double eps;     // точність

public:
    EquationSolver();
    ~EquationSolver();

    void setInterval(double vol_a, double vol_b);
    void setTolerance(double vol_eps);

    double function(double x);      // функція
    double derivative(double x);    // похідна

    int bisection(double &x);       // метод дихотомії
    int newton(double &x);          // метод Ньютона
};

#endif