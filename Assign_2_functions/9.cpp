#include<iostream>
using namespace std;

int max(int, int);
double max(double, double);


int main(){
    cout << max(23,45) << endl;
    cout << max(23.44,55.33);
}

int max(int a, int b){
    if(a>=b){
        return a;
    }
    return b;
}

double max(double a, double b){
    if(a>=b){
        return a;
    }
    return b;
}

