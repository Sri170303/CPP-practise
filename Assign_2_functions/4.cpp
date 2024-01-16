#include<iostream>
using namespace std;

int fact(int);
void pascals_triangle(int);

int main(){
    pascals_triangle(10);
    return 0;
}

void pascals_triangle(int n){
    
    int i = 0;

    while(i<n){
        int j=0;
        while(j<=i){
            cout << fact(i)/(fact(j)*fact(i-j)) << ' ';
            j++;
        }
        cout << endl;
        i++;
    }

    return;
}



int fact(int num){
    if(num==0 || num==1){
        return 1;
    }

    int factorial=1;
    while(num>1){
        factorial = factorial*num;
        num--;
    }

    return factorial;
}