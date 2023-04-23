#include <iostream>
#include <iomanip> 

int main() {

  std::cout << "Please enter a value in meters:\n";
  double meters;
  std::cin >> meters;
  std::cout << std::fixed << std::setprecision(2);
  std::cout << "You've entered " << meters << " meters!\n";

  double m_to_in = 39.3701;
  double m_to_ft = 3.28084;  
  double m_to_ya = 1.09361;  
  double m_to_mi = 0.000621371;  

  double inch = meters * m_to_in;
  double foot = meters * m_to_ft;
  double yard = meters * m_to_ya;
  double mile = meters * m_to_mi; 
    
  std::cout << "\nThis is equivalent to:\n" 
            << inch << " inches\n" 
            << foot << " feet\n" 
            << yard << " yards\n";
  std::cout << std::scientific;
  std::cout << mile << " miles" 
            << std::endl;
}