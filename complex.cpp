/* Semih Demir
 * No: 18120205005
 * hw02 - Complex Numbers
 * complex.cpp
 */

#include <iostream>
#include <string>
#include <sstream> 
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
Complex::Complex(const string &comment){
    try
    {   
        /* vector <string> temp;
        stringstream ss (comment);
        string fixer;
        char delim = ';, ';

        while(getline(ss,fixer,delim)){
            temp.push_back(fixer);
        }
        for(int i=0 ; i<temp.size(); i++){
            cout << temp[i];
        } */

        string delim = "',',' '";
        vector <string> list;
        string temp = comment;
        size_t i;
        string token;
        while((i = temp.find(delim)) != -1){
            token = temp.substr(0,i);
            list.push_back(token);
            temp.erase(0,i+delim.length());
        }
        list.push_back(temp);
        for(int i=0 ; i<temp.size(); i++){
            c_numbers[i] = list[i]
            cout << c_numbers[i];
        }
    }
    catch(const std::exception& e)
    {
        cout << "Hatali girdiniz!" << endl;
        std::cerr << e.what() << '\n';
    }
    
}// ???
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

int main(){
    Complex("3+i, 2+i,34-24i ");

}
