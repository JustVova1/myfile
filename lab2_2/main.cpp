#include <iostream>
#include "polygon.h"
using namespace std;

int main(){
    Polygon *a;
    Triangle tri;
    Rectangle rec;
    a =&tri;
    cout<<"Triangle"<<endl;
    a->read(); a->area() ; a->display();cout<<endl;
    a =&rec;
     cout<<"Rectangle"<<endl;
    a->read(); a->area() ;a->display();

}
