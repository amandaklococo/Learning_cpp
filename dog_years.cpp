//Create a progam that will convert your dog's ago into human years.
#include <iostream>

int main() {
  
  //Declare dog's current age
  int dog_age;

  std::cout << "What is your dog's age? I'll convert that into human years.\n";

  std::cin >> dog_age;

  //The first two years of a dogs's life count as 21 human years
  int early_years = 21;
  //Each following year counts as 4 human years
  int later_years = (dog_age - 2) * 4;
  //Add the early_years and later_years to get your dog's age in human years
  int human_years = early_years + later_years;

  std::cout << "My name is Spot! Ruff, ruff, I am " << human_years << " years old in human years.\n";

}