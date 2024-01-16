#include<iostream>
using namespace std;

void swap(int &, int &);

int main(){
    int a = 33;
    int b = 22;
    cout << "Before swapping a ="<<a<<" and b="<<b << endl; 
    swap(a,b);
    cout << "Before swapping a ="<<a<<" and b="<<b;
    return 0;
}

void swap(int &a, int &b){
    a = a+b;
    b = a-b;
    a = a-b;
    return;
}