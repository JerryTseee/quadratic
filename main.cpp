// quadratic.cpp

#include <iostream>
#include <cmath>
#include "quadratic.h"
using namespace std;

double discriminant(double a, double b, double c) {
    // to be implemented
    double output;
    output = b*b - 4*a*c;
    return output;
}

int numRoots(double a, double b, double c) {
    // to be implemented
    double temp;
    temp = discriminant(a,b,c);
    if (temp < 0)
    {
     return 0;
    }
    else if (temp == 0)
    {
     return 1;
    }
    else
    {
     return 2;
    }
}

double root1(double a, double b, double c) {
    // to be implemented
    double output;
    double discr;
    discr = discriminant(a,b,c);
    output = (-b+sqrt(discr)) / (2*a);
    return output;
}

double root2(double a, double b, double c) {
    // to be implemented
    double output;
    double discr;
    discr = discriminant(a,b,c);
    output = (-b-sqrt(discr)) / (2*a);
    return output;
}
