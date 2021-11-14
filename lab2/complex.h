#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class Complex{
private:
    double real;
    double imaginary;
public:

//    Конструкторы
    Complex(){
        cout<<"Default constructor"<<endl;
    };
    Complex(int l,int f):real(l),imaginary(f){
         cout<<"Constructor with initialization list"<<endl;
    };
    Complex(int k,int n,int f){
        k =real ;
        n = imaginary;
        f=0;
         cout<<"initialization constructor "<<endl;
    };
    Complex(const Complex &drob) :real(drob.real), imaginary(drob.imaginary) {
            cout << "Copy constructor "<<endl;
        };
    double getReal() const { return real; }


     ~Complex();// Деструктор
// functions
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
   void init (double real , double imaginary);
   void add(Complex a,Complex &temp);
   void sub(Complex a,Complex &temp);
   void mul(Complex a,Complex &temp);
   void div(Complex a,Complex &temp);
   void equ(Complex a);
   void conj(Complex &temp);


};
#endif // COMPLEX_H
