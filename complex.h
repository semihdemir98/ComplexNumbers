/* Semih Demir
 * No: 18120205005
 * hw02 - Complex Numbers
 * complex.h
 */

using namespace std;
class Complex
{
//variables    
private:
    int real;
    int imaj;

public:
    //constructors
    Complex(); // 1 Default Constructor
    Complex(int r); // 2 Conversion Constructor
    Complex(double r); // 3 Conversion Constructor
    Complex(string comment); // 4 Conversion Constructor
    Complex(int a, int b); // 5

    // 6 getter-setter methods
    int getter_real();
    int getter_imaj();
    void setter_real(int a);
    void setter_imaj(int b);

    // 7-8-9 member functions
    void add(Complex& a);
    void subtract(Complex& a);
    void divide(Complex& a);

    //10 printer function
    void print_complex();

    //sorting function
    friend double sort(vector <Complex>& a);
};
