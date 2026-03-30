#ifndef EQUATIONSOLVER_H
#define EQUATIONSOLVER_H

class EquationSolver {
private:
    double a, b;    
    double eps;     

public:
    EquationSolver();
    ~EquationSolver();

    void setInterval(double vol_a, double vol_b);
    void setTolerance(double vol_eps);

    double function(double x);   
    double derivative(double x);   

    int bisection(double &x);       
    int newton(double &x);          
};

#endif