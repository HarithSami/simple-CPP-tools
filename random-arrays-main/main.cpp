#include <iostream>
#include "funcs.h"

int main() {

  int array[20] = {};
  for (int i = 0; i < 20; i++) {
    array[i] = get_random_number(0,100);
    std::cout << "array[" << i << "] = " << array[i] << std::endl;
  }
  
  int min_value = get_min_value(array,20);
  std::cout << "Minimum value = " << min_value << "\n";
  
  int max_value = get_max_value(array,20);
  std::cout << "Maximum value = " << max_value << "\n";

  int number = 7;
  int counter = num_counter(array,20,number);
  std::cout << "The number " << number << " was repeated " << counter << " times in the array.\n";


}




