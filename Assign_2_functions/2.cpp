#include<iostream>
using namespace std;

int highest_digit(int);

int main(){
    cout << highest_digit(12934760);
    return 0;
}

int highest_digit(int num){
    int highest_digit = 0;
    while(num){
        if(highest_digit < num%10){
            highest_digit = num%10;
            if(highest_digit==9){
                return highest_digit;
            }
        }
        num/=10;
    }
    return highest_digit;
}