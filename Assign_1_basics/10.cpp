#include<iostream>
using namespace std;

int main(){
    int arr[10];
    cout << "Enter 10 integers: ";

    int sum=0;

    for(int i=0; i<10; i++){
        cin >> arr[i];
        sum = sum + arr[i];
    }

    cout << "Sum = "<< sum;
    return 0;    

}