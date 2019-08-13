#include<iostream>
#include<cstdlib>
#include<cmath>
#include<conio.h>
using namespace std;

int main(){
    int I1,I2,distancia,resultado,a,b,c,d;
    double x1,e,f,g,z;
    cout<<"Ingresa la intensidad mas fuerte:";
    cin>>I1;
    cout<<"Ingresa la intensidad mas debil:";
    cin>>I2;
    cout<<"Ingresa la distancia:";
    cin>>distancia;
    a = I1+I2;
    b = -(3*distancia)*I1;
    c = (3*pow(distancia,2))*I1;
    d = -(pow(distancia,3))*I1;
    cout<<"\nI'(x) = "<<a<<"(x^3)"<<b<<"(x^2)+"<<c<<"x"<<d<<"\n";
    z =(double)1/3;
    e = -(pow(27,2))+(3*(a*c));
    f = (-2*(pow(b,3)))+(9*(a*b*c))-27*(pow(a,2)*d);
    g = pow(f+(sqrt(4*pow(e,3)+pow(f,2))),z);
    x1 = (-b/(3.0*a))-((pow(2,z)*e)/(3*a*g))+(g/(3*pow(2,z)*a));
    cout<< "La distancia a la fuente de mayor intensidad debe ser = "<<x1<<"\n";
    cout<<"I''(x) = "<<a*3<<"(x^2)"<<b*2<<"(x)+"<<c<<"\n";
    cout<<"I''("<<x1<<") ="<<a*3*pow(x1,2)+b*2*x1+c<<".\n";
    cout<<"Como I''("<<x1<<") > 0 se trata de un minimo.\n";
system("pause");
}







