#include <iostream>
using namespace std;

bool fib_check(int);

int main(){
    cout << fib_check(7);
    return 0;
}


bool fib_check(int num){

    int a = 0;
    int b = 1;

    while(a<num){
        int temp = a;
        a = b;
        b = a+temp;
    }

    if(num==a){
        return true;
    }
    return false;
}