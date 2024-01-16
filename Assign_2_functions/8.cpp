#include<iostream>
using namespace std;
#include <math.h>

double area(double);
double area(double, double);
double area(double,double,double);

int main(){
    cout << area(7,22) << endl;
    cout << area(7,5,3) << endl;
    cout << area(12);
}

double area(double radius){
    return 3.14*radius*radius;
}


double area(double length, double breadth){
    return length*breadth;
}

double area(double a, double b, double c) {
    double s = (a + b + c) / 2.0;
    double area_square = s * (s - a) * (s - b) * (s - c);
    double result = sqrt(area_square);
    return result;
}