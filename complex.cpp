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
Complex::Complex(double r){ 
    real = r;
    imaj = 0;
}
Complex::Complex(const string &comment){
    try
    {
        string str = "-";
        size_t found = comment.find(str,1);
        char delimeters = '+';
        if(found != string::npos){
            delimeters = '-';
        }
        stringstream ss2 (comment);
        string fixer;
        vector<string> temp;
        int a = 0;
        while(getline(ss2,fixer,delimeters)){
                temp.push_back(fixer);
                a++;     
        }
        int r,i;
        stringstream ss1(temp[0]);
        stringstream ss3(temp[1]);
        ss1 >> r;
        ss3 >> i;
        real = r;
        imaj = i; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    } 
}
Complex::Complex(int a, int b):real(a),imaj(b){}
//-----getter&setter------//
double Complex::getter_real(){return this->real;}
double Complex::getter_imaj(){return this->imaj;}
void Complex::setter_real(double a){real=a;}
void Complex::setter_imaj(double b){imaj=b;}
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
    try
    {
        Complex t1, t2, t3;

        t1.real = a.real;
        t1.imaj = -1 * a.imaj;

        t2.real = (this->real * t1.real) + (-1 * (this->imaj * t1.imaj));
        t2.imaj = (this->real * t1.imaj) + (t1.real * this->imaj);

        a.real = (t1.real * a.real) + (-1 * (t1.imaj * a.imaj));
        a.imaj = (t1.real * a.imaj) + (a.real * t1.imaj);

        t3.real = t2.real / a.real;
        t3.imaj = t2.imaj / a.imaj;

        this-> real = t3.getter_real();
        this-> imaj = t3.getter_imaj();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}
//-----printer function------//
void Complex::print_complex(){
    if(this->getter_imaj() >= 0){
        cout << getter_real() << "+" << getter_imaj() << "i"<<endl;
    }
    else
    {
        cout << getter_real() << getter_imaj() << "i"<<endl;
    }  
}
//-----sorting function------//
void sort(vector<Complex> &v){
    try
    {
        vector<Complex> temp;
        for(auto i = 0; i < v.size(); i++){
            temp.push_back(v[i]);
        }
        Complex _temp;
        //real
        for(auto i = 0; i < temp.size() - 1; i++){
            for(auto j = 0; j < temp.size() - i - 1; j++){
                if(temp[j].getter_real() < temp[j + 1].getter_real()){
                    _temp = temp[j];
                    temp[j] = temp[j + 1];
                    temp[j + 1] = _temp;
                }
            }
        }   
        for(auto i = 0; i < temp.size(); i++){
            temp[i].print_complex();
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}    

int main(){
    Complex a("-5 + 2i");
    a.print_complex(); 
 
    /*  Complex a(3, 4);
    Complex b(8, -2); 
     a.divide(b);
    a.print_complex();  */
     
     /*a.subtract(b);
    a.print_complex(); */
    
    /* Complex a(6,22);
    Complex b(42,32);
    Complex c(33,2);
    Complex d(-2,-266);
    Complex e(57,277);
    
    vector <Complex> temp;
    temp.push_back(a);
    temp.push_back(b);
    temp.push_back(c);
    temp.push_back(d);
    temp.push_back(e);
    sort(temp);  */
    
}
