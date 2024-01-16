#include<iostream>
using namespace std;

bool isPrime(int);
int sqrt(int);

int main(){
    cout << isPrime(5);
}

bool isPrime(int num){

    if(num<2){
        return false;
    }

    int num_sqrt_floor = sqrt(num);

    //cout << num_sqrt_floor;

    for(int i=2; i <= num_sqrt_floor; i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}

int sqrt(int num){
    int i = 1;
    int result = 1;
    while(result<=num){
        i=i+1;
        result = i*i;
    }
    return i-1;
}