/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the implementation file for the Shire class that inherits from Space.
 ** Methods are a constructor that takes in a name string, an intro function, and events
 ********************************************************************************************/


#include "Shire.hpp"

#include <iostream>


// Constructor that assigns the type, days, and an inputted name
Shire::Shire(std::string nameIn)
{
  name = nameIn;
  type = "shire";
  days = 1;
}

// intro function that outputs an introduction for the location
void Shire::intro() {
  
  std::cout << std::endl;
  std::cout << "You are in the Shire, this is where your quest begins." << std::endl;
  std::cout << "The special acorn seed can be found here if you search hard enough..." << std::endl;
  std::cout << std::endl;
  
}

// events function that outputs random events at different percentages and returns an integer
int Shire::events() {
  
  int num = rand() % 10 + 1;
  
  if (num <= 4) {
    std::cout << "You've found the special item acorn!" << std::endl;
    return 1;
  }
  
  if (num <= 8) {
    std::cout << "You were invited to a hobbit house and got some energy!" << std::endl;
    return 2;
  }
  
  else {
    std::cout << "You went to the inn, sang and made merry - that took a whole day!" << std::endl;
    return 0;
  }
  
}

// Default destructor function 
Shire::~Shire()
{

}




