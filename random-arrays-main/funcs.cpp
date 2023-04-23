#include "funcs.h"

int get_random_number(int low, int high) {
  int seed =
      std::chrono::high_resolution_clock::now().time_since_epoch().count();
  std::mt19937 generator(seed);
  std::uniform_int_distribution<int> distribution(low, high);
  return distribution(generator);
}

int get_min_value(const int array[], int n) {
  int min = array[0];
  
  for (int i = 1; i < n; i++) {
    if (array[i] < min) {
      min = array[i];
    }
  }
  return min;
}

int get_max_value(const int array[], int n) {
  int max = array[0];
  
  for (int i = 1; i < n; i++) {
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max;
}


int num_counter(const int array[], int n, int number) {
  int counter = 0;
  
  for (int i = 1; i < n; i++) {
    if (array[i] == number) {
      counter ++;
    }
  }
  return counter;
}