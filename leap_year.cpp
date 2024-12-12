#include <iostream>

int main() {
  
int year;

std::cout << "Please enter a year:\n";

std::cin >> year;

if (year < 1000) {
  std::cout << "You must enter a 4-digit year.\n";

  std::cin >> year;
}

if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
  std::cout << "The year you have entered is a leap year.\n";
}

else {
  std::cout << "The year you have entered is not a leap year.\n";
}
  
}
