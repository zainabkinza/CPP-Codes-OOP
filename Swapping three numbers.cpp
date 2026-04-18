#include<iostream>
using namespace std;

void swap(int* a, int* b, int* c){
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

int main(){
    int x, y, z;

    cout << "Enter first number (x): ";
    cin >> x;
    cout << "Enter second number (y): ";
    cin >> y;
    cout << "Enter third number (z): ";
    cin >> z;

    swap(&x, &y, &z);

    cout << "After swapping:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;

    return 0;
}