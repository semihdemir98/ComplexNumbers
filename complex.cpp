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
            temp[0].push_back(fixer);
            a++;     
    }
    int r,i; 
    stringstream ss1(temp[0]);
    stringstream ss3(temp[1]);
    ss1 >> r;
    ss3 >> i;
    real = r;
    imaj = i; 
}// ???
Complex::Complex(int a, int b):real(a),imaj(b){}
//-----getter&setter------//
int Complex::getter_real(){return this->real;}
int Complex::getter_imaj(){return this->imaj;}
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
//-----printer functions------//
void Complex::print_complex(){
    cout << getter_real() << "+" << getter_imaj();
}

int main(){
    Complex a("3+i");
    a.print_complex();

}
