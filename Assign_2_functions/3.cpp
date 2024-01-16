#include<iostream>
using namespace std;

double pow(double , double);

int main(){
    cout << pow(2,-3);
    return 0;
}


double pow(double x,double y)
{
    
    if(y>0)
        return x*pow(x,y-1);
    else if(y<0)
        return 1/x*pow(x,y+1);
    else
        return 1;
}