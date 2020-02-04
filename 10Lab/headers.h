#pragma once

double Simpson(const double a, const double b, const double eps, double(*const f)(double));
double ellipse(const double x);
double Dirichlet(const double x);
double Poisson(const double x);
double Euler(const double x);
double average(const double a, const double b);
double sgn(double x);
