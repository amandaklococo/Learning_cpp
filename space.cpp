#include <iostream>

int main() {

    int weight;
    int planet;

    std::cout << "Enter your weight (on Earth)\n";

    std::cin >> weight;
    
    std::cout << "What planet would you like to fight on?\n";
    std::cout << "Your options are:\n";
    std::cout << "1. Mercury\n";
    std::cout << "2. Venus\n";
    std::cout << "3. Mars\n";
    std::cout << "4. Jupiter\n";
    std::cout << "5. Saturn\n";
    std::cout << "6. Uranus\n";
    std::cout << "7. Neptune\n";
    std::cout << "Please enter the planet number.\n";

    std::cin >> planet;

    switch (planet)
    {
    case 1 :
        weight = weight * 0.38;
        break;
    case 2 :
        weight = weight * 0.91;
        break;
    case 3 :
        weight = weight * 0.38;
        break;
    case 4 :
        weight = weight * 2.34;
        break;
    case 5 :
        weight = weight * 1.06;
        break;
    case 6 :
        weight = weight * 0.92;
        break;
    case 7 :
        weight = weight * 1.19;
        break;
    default:
        break;
    }

    std::cout << "Your weight is " << weight << " pounds.\n";

}