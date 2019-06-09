/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the implementation file for the Kingdom class that inherits from Space.
 ** Methods are a constructor that takes in a name string, an intro function, and events
 ********************************************************************************************/


#include "Kingdom.hpp"

#include <iostream>


// Constructor that assigns the type, days, and an inputted name
Kingdom::Kingdom(std::string nameIn)
{
  name = nameIn;
  type = "kingdom";
  days = 2;  
}

// intro function that outputs an introduction for the location
void Kingdom::intro() { 
  
  std::cout << std::endl;
  std::cout << "You have entered a kingdom of Middle-Earth, where many weapons can be found." << std::endl;
  std::cout << "The magic scrolls are hidden here if you can get to them first..." << std::endl;
  std::cout << std::endl;
  
}

// events function that outputs random events at different percentages and returns an integer
int Kingdom::events() {
  
  int num = rand() % 100 + 1;
  
  if (num <= 25) {
    std::cout << "You've found the special magic scrolls!" << std::endl;
    return 1;
  }
  
  if (num <= 60) {
    std::cout << "You are given weapons as a gift from the king!" << std::endl;
    return 4;
  }
  
  if (num <= 80) {
    std::cout << "You run into spies, quick use a weapon to stop them!" << std::endl;
    return 3;
  }
  
  else {
    std::cout << "You take out a day to attend a royal banquet thrown in your honor!" << std::endl;
    return 0;
  }
  
}

// Default destructor function 
Kingdom::~Kingdom() { 

}
