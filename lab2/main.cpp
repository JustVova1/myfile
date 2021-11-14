#include <iostream>
#include <cmath>
#include "complex.h"

int main(){
    Complex num1;
    Complex temp;
    cout<<"Input pair 1 : "<<endl;
    num1.read();
    Complex num2;
    cout<<"Input pair 2 : "<<endl;
    num2.read();

    num1.add(num2,temp);
    cout<<"add : ";
    temp.display();
    num1.sub(num2,temp);
    cout<<"sub : ";
    temp.display();
    num1.mul(num2,temp);
    cout<<"mul : ";
    temp.display();
    num1.div(num2,temp);
    cout<<"div : ";
    temp.display();
    num1.equ(num2);
    cout<<"equ : ";
    num1.conj(temp);
    cout<<"conj : ";
    temp.display();
    Complex num3(3,6);
    num3.display();
    Complex copy(num3);
    const Complex num4;
    num4.getReal();
}
