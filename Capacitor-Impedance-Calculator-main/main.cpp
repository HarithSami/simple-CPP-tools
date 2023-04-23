#include <iostream>
#include <complex>
#include <cmath>
#include <iomanip>
#define PI 3.14159265

std::complex<double> get_impedance( double, double, std::complex<double>);

int main() {
  
  double f, C;
  const std::complex <double> j = std::sqrt(std::complex<double>(-1,0));
  std::cout << "Capacitor Impedance Claclulator\nEnter the frequency (in Hertz) " << std::endl;
  std::cin >> f;

  std::cout << "Enter the capacitance value (in Farads) " << std::endl;
  std::cin >> C;


   std::complex<double> impedance = get_impedance( f, C, j);
   std::cout  << "Capacitor Impedance = " << abs( impedance ) <<  " Ω." <<  std::endl;



}


inline
std::complex<double> get_impedance( double frequency, double capacitance, std::complex<double> j )
{
   std::complex<double> impedance( 1.0 / (j * 2.0 * PI * frequency * capacitance));

   return impedance;
}