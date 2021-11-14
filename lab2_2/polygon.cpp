#include "polygon.h"

   void Polygon ::read(){
        cout<<"Input A = ";cin>>pA;
        cout<<"Input B = ";cin>>pB;
        this->setPar(pA,pB);
        cout<<endl;
    };
   void Polygon :: setPar(double a ,double b ){
       pA = a;
       pB = b;
   };
   void Polygon ::display(){
       cout<<a;
   }
   void Triangle :: area(){

       cout << "Triangle Area = ";
       a = pA * 0.5 * pB;
   }
   void Triangle::read(){
          cout<<"Input height = ";cin>>pA;
          cout<<"Input  base side = ";cin>>pB;
          this->setPar(pA,pB);
          cout<<endl;
   }

   void Rectangle :: area(){
       cout << "Rectangle Area = ";
       a = pA  * pB;

   }
   void Rectangle::read(){
       cout<<"Input length = ";cin>>pA;
       cout<<"Input width = ";cin>>pB;
       this->setPar(pA,pB);
       cout<<endl;
   }
