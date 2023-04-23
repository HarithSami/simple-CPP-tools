#include <cmath>
#include <iostream>

const double PI = 3.14159265359;

void currency_convert(float GBP, float &USD, float &EUR, float &CNY, float &NGN, float &RUB);

int main() {

float GBP, USD, EUR, CNY, NGN, RUB;;

std::cout << "Enter currency value in GBP " << std::endl;
std::cin >> GBP;

currency_convert(GBP, USD, EUR, CNY, NGN, RUB);
std::cout << "The entered amount in British Pounds is equal to:\n $" << USD << "\n €" << EUR << "\n ¥" << CNY << "\n ₦" << NGN << "\n ₽" << RUB << std::endl;

}

void currency_convert(float GBP, float &USD, float &EUR, float &CNY, float &NGN, float &RUB) 
{
  USD= GBP * 1.37;
  EUR= GBP * 1.19;
  CNY= GBP * 8.85;
  NGN= GBP * 564.86;
  RUB= GBP * 97.69;
}