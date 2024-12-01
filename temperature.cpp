//Create a code that will return celsius when given farenheit
#include <iostream>

int main() {
  
  double tempf;
  double tempc;
  
  // Ask the user
  std::cout << "Enter the temperature in Farenheit:\n";
  
  std::cin >> tempf;
  
  tempc = (tempf - 32) / 1.8;
  
  std::cout << "The temp is " << tempc << " degrees Celsius.\n";
  
}