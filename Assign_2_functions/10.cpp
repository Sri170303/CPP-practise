#include<iostream>
using namespace std;

int add(int, int);
double add(double, double);
double add(int, double);
double add(double, int);

int main(){
    cout << add(23,54) << endl;
    cout << add(23.55,33) << endl;
    cout << add(33,34.22);
    return 0;
}

int add(int a,int b){
    return a+b;
}


double add(double a, double b){
    return a+b;
}

double add(int a, double b){
    return a+b;
}

double add(double a, int b){
    return a+b;
}