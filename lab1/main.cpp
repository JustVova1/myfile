#include <iostream>
#include <cmath>
using namespace std;
class Complex{
private:
    double real;
    double imaginary;
public:
    void setR(double valueX){
        real = valueX;
    }
    void setI(double valueX){
        imaginary = valueX;
    }
    double getR(){
        return real;
    }
    double getI(){
        return imaginary;
    }
   void read();
   void display();
   void add(Complex a,Complex &temp);
   void sub(Complex a,Complex &temp);
   void mul(Complex a,Complex &temp);
   void div(Complex a,Complex &temp);
   void equ(Complex a);
   void conj(Complex &temp);


};

void Complex::read(){
    double rl=0,im=0;
    cout<<"Input real = ";cin>>rl;
    this->setR(rl);
    cout<<"Input im = ";cin>>im;
    this->setI(im);
    cout<<endl;
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
    cout<<"div : ";
    num1.div(num2,temp);
    temp.display();
    cout<<"equ : ";
    num1.equ(num2);
    num1.conj(temp);
    cout<<"conj : ";
    temp.display();
}
