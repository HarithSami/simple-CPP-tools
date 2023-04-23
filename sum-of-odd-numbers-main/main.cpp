#include <iostream>

int main() {
  std::cout << "The sum of odd numbers calculator\n\n";
  // 1. Get the user to enter a number
  int n;
  int sum = 0;
  std::cout << "Please enter an integer: ";
  std::cin >> n;

  std::cout << "\nWe'll now print out the sum of the all the odd numbers starting from 0 leading up to your number!\n\n";


  for (int i = 0; i < n ; i++) {
    if ( i % 2 != 0){
      sum += i; 
    }
  }
  std::cout << sum;
}
