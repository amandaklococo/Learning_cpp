//Create a program that asks for distance in miles and returns kilometers
#include <iostream>

int main() {
  // Add your code below
  double miles;
  double kilometers;

  std::cout << "Enter the distance in miles.\n";
  
  std::cin >> miles;

  kilometers = miles * 1.609;

  std::cout << "The distance in kilometers is " << kilometers << ".\n";
    
}