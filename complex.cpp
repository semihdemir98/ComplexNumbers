/* Semih Demir
 * No: 18120205005
 * hw02 - Complex Numbers
 * complex.cpp
 */

#include <iostream>
#include "complex.h"
#include <vector>

using namespace std;
//-------constructor---------//
Complex::Complex(){
    real=0;
    imaj=0;
}
Complex::Complex(int r):real(r),imaj(0){}
Complex::Complex(double r){ // ???
    real = r;
    imaj = 0;
}
Complex::Complex(string comment){}// ???
Complex::Complex(int a, int b):real(a),imaj(b){}
//-----getter&setter------//
int Complex::getter_real(){return real;}
int Complex::getter_imaj(){return imaj;}
void Complex::setter_real(int a){real=a;}
void Complex::setter_imaj(int b){imaj=b;}
//-----member functions------//
void Complex::add(Complex& a){
   real = real + a.real;
   imaj = imaj + a.imaj; 
}
void Complex::subtract(Complex& a){
    real = real - a.real;
    imaj = imaj - a.imaj;
}
void Complex::divide(Complex& a){
    Complex t1, t2;
    t1.real = a.real;

}
