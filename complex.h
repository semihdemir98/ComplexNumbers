/* Semih Demir
 * No: 18120205005
 * hw02 - Complex Numbers
 * complex.h
 */
using namespace std;
#include <vector>
class Complex
{
//variables    
private:
    double real;
    double imaj;

public:
    //constructors
    Complex(); // 1 Default Constructor - Arguman almadan objeyi baslatir.
    Complex(int r); // 2 Conversion Constructor - Tam sayiyi kompleks sayiya cevirir.
    Complex(double r); // 3 Conversion Constructor - Reel sayiyi karmasikk sayiya cevirir.
    Complex(const string &comment); // 4 Conversion Constructor - String olarak gonderilen 
                                    //argumani karmasik sayiya cevirir.
    Complex(int a, int b); // 5 - Iki argumani alarak kompleks sayinin gercek ve sanal kismini olusturur.

    // 6 getter-setter methods - Classin private degiskenlerini guvenli bir sekilde kullanmaya yarar.
    double getter_real();
    double getter_imaj();          
    void setter_real(double a);
    void setter_imaj(double b);

    // 7-8-9 member functions - Karmasik sayilarda ekleme, cikarma ve bolme islemlerini yapar.
    void add(Complex& a);
    void subtract(Complex& a);
    void divide(Complex& a);

    //10 printer function - Objeyi print eder.
    void print_complex();
    
    //extra operator overloading
    void operator=(Complex &a){
         real = a.real;
         imaj = a.imaj;

    }
   
};
