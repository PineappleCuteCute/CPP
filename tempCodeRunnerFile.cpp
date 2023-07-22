#include<iostream>
using namespace std;

int main(){
    int x = 10;
    int *p;
    p = &x;
    cout << (unsigned long int)&x << endl;
    cout << (unsigned long int)p << endl;
    cout << (unsigned long int)*p << endl;
    cout << (unsigned long int)&p << endl;
    cout << (unsigned long int)&*p << endl;


    // int y = 100;
    // int *q;
    // q = &y;

    // int *z;
    // z = p - q;
    // cout << *z;
