// Created by: Paterry Baptichon Junior
// Created on: 2022-04-03
// This program calculates the area of a pentagon

#include <iostream>
#include <cmath>

int main() {
    // Declaring variables
    int base;
    int height;
    float area;
  

    // Asking user for the input of the base and height of the pentagon
    std::string userAnswer;
    std::cout << "Finding surface area of a pentagon. " << std::endl;
    std::cout << "Enter the base of the pentagon (cm): ";
    std::cin >> base;
    std::cout << "Enter the height of the pentagon (cm): ";
    std::cin >> height;

    // The formula and calculation
    area = (0.5)*base*height;
    // display the user the area of a pentagon\
    
    std::cout << "" << std::endl;
    std::cout << "The area is " << (area) << "cm^2" << std::endl;
     // Ask if user would like to calculate again
  std::cout << "Would you like to calculate again? Y or N\n";
  std::cin >> userAnswer;

  if (userAnswer == "Y" || "y") {
      main();
      
  }
}