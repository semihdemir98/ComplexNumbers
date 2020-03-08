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
    Complex(); // 1 Default Constructor
    Complex(int r); // 2 Conversion Constructor
    Complex(double r); // 3 Conversion Constructor
    Complex(const string &comment); // 4 Conversion Constructor
    Complex(int a, int b); // 5

    // 6 getter-setter methods
    double getter_real();
    double getter_imaj();          
    void setter_real(double a);
    void setter_imaj(double b);

    // 7-8-9 member functions
    void add(Complex& a);
    void subtract(Complex& a);
    void divide(Complex& a);

    //10 printer function
    void print_complex();

    //sorting function
    
    //extra operator overloading
    void operator=(Complex &a){
         real = a.real;
         imaj = a.imaj;

    }
   
};
