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
    /* try
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

        /* string delim1 = "',',' '";
        string delim2 = "+,-";
        vector <string> list;
        string temp = comment;
        size_t i;
        string token;
        while((i = temp.find(delim2)) != -1){
            token = temp.substr(0,i);
            c_numbers.push_back(setter_real(token));
            temp.erase(0,i+delim.length());
        }
        list.push_back(temp);
        for(int i=0 ; i<temp.size(); i++){
            c_numbers[i] = list[i];
            c_numbers[i].getter_imaj();
            c_numbers[i].getter_real();
        }

    }
    catch(const std::exception& e)
    {
        cout << "Hatali girdiniz!" << endl;
        std::cerr << e.what() << '\n';
    }  */

    stringstream ss2 (comment);
    char delimeters = '+';
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
    imaj = 1; 
}// ???
Complex::Complex(int a, int b):real(a),imaj(b){}
//-----getter&setter------//
double Complex::getter_real(){return this->real;}
double Complex::getter_imaj(){return this->imaj;}
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
   /*  Complex t1, t2;
    
    t1.real = a.real;
    t1.imaj = -1 * a.imaj;

    t2.real = (this->real * t1.real) + (-1*(this->imaj * t1.imaj));
    t2.imaj = (this->real * t1.imaj) + (t1.real * this->imaj);

    a.real = (t1.real * a.real) + (-1 * (t1.imaj * a.imaj));
    a.imaj = (t1.real * a.imaj) + (a.real * t1.imaj);

    this-> real = t2.real / a.real;
    this-> imaj = t2.imaj / a.imaj; */
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
//-----printer function------//
void Complex::print_complex(){
    if(this->getter_imaj() >= 0){
        cout << getter_real() << "+" << getter_imaj() << "i";
    }
    else
    {
        cout << getter_real() << getter_imaj() << "i";
    }  
}
//-----sorting function------//
void sort(vector <Complex>& a){

    vector <Complex> temp;
    vector <Complex> a;
    for(int i = 0; i< a.size(); i++ ){

        temp[i].getterreal = a[i].real;
        temp[i].imaj = a[i].imaj;
    }
    cout << "real kisma gore siralama " << endl;
    for (int i = 0; i < temp.size()-1; i++){    
        for (int j = 0; j < temp.size()-i-1; j++){
            if (temp[j].real > temp[j+1].real){  
                a[j] = temp[j];
                temp[j] = temp [j+1];
                temp[j+1] = a[j];
            }
        }
    }
    for(int i = 0; i< temp.size(); i++){
        temp[i].print_complex();
    }
}    

int main(){
    /* Complex a("3+i");
    a.print_complex(); */

   /*  Complex a(1,-3);
    Complex b(1,2); */
   /*  a.divide(b);
    a.print_complex(); */
    /* a.subtract(b);
    a.print_complex();
     */
    Complex a(1,2);
    Complex b(2,2);
    Complex c(3,2);
    Complex d(4,2);
    Complex e(5,2);

    vector <Complex> temp;
    temp.push_back(a);
    temp.push_back(b);
    temp.push_back(c);
    temp.push_back(d);
    temp.push_back(e);
    
}
