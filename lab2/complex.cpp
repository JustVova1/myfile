#include "complex.h"
#include <iostream>
#include <cmath>


void Complex ::init(double a ,double b){
        int f=0;
        while(f==0){
            if (a == 0 && b == 0)
                    {
                        cout << "two numbers must not be equal to 0"<<endl;
                        cout<<"Input real = ";cin>>a;
                        cout<<"Input im = ";cin>>b;
                    }
                    else
                    {
                        this->setR(a);
                        this->setI(b);
                        cout<<endl;
                        f= 1;
                        break;
                    }
        }
}
void Complex::read(){
    double rl=0,im=0;
    cout<<"Input real = ";cin>>rl;
    cout<<"Input im = ";cin>>im;
    init(rl ,im);
};
void Complex::display(){
    cout<<"real = "<<real<<" "<<"im = "<<imaginary<<endl;
}
void Complex::add(Complex a,Complex &temp){
    temp.real = real + imaginary ;
    temp.imaginary = a.real + a.imaginary;
};
void Complex::sub(Complex a,Complex &temp){
     temp.real = real - imaginary ;
     temp.imaginary = a.real - a.imaginary;
};
void Complex::mul(Complex a,Complex &temp){
     temp.real = (real*a.real) -(imaginary* a.imaginary) ;
     temp.imaginary = (real * a.imaginary) +(imaginary * a.real) ;
};
void Complex::div(Complex a,Complex &temp){
     temp.real = ((real*a.real) +(imaginary* a.imaginary)/(pow(2,a.real) + pow(2,a.imaginary))) ;
     temp.imaginary = ((imaginary * a.real) -(real * a.imaginary)/(pow(2,a.real) + pow(2,a.imaginary))) ;
};
void Complex::equ(Complex a){
    if(real == a.real && imaginary == a.imaginary){
        cout<<"(a, b) = (c, d)"<<endl;
    }else{
        cout<<"Not (a, b) = (c, d)"<<endl;
    }
};

void Complex::conj(Complex &temp){
    temp.real = real ;
    temp.imaginary = -imaginary;
};
Complex::~Complex()
 {
 cout<<"Destructor"<<endl<<endl;
 }
