/***********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the implementation file for the Mountains class that inherits from Space.
 ** Methods are a constructor that takes in a name string, an intro function, and events
 ***********************************************************************************************/


#include "Mountains.hpp"

#include <iostream>


// Constructor that assigns the type, days, and an inputted name
Mountains::Mountains(std::string nameIn)
{  
  name = nameIn;
  type = "mountains";
  days = 1;
}

// intro function that outputs an introduction for the location
void Mountains::intro() { 
 
  std::cout << std::endl;
  std::cout << "You are in the mountains, beware of dangers lurking everywhere." << std::endl;
  std::cout << "The mithril you are searching for can be found here, in the deep dark..." << std::endl;
  std::cout << std::endl;
  
}

// events function that outputs random events at different percentages and returns an integer
int Mountains::events() {
  
  int num = rand() % 100 + 1;
  
  if (num <= 25) {
    std::cout << "You have found some rare mithril!" << std::endl;
    return 1;
  }
  
  if (num <= 40) {
    std::cout << "You find a weapon forged by the dwarves" << std::endl;
    return 4;
  }
  
  if (num <= 85) {
    std::cout << "You are ambushed by orcs, quickly use your weapons to defeat them!" << std::endl;
    return 3;
  }
  
  else {
    std::cout << "You are lost in the dark caves for a day, keep searching" << std::endl;
    return 0;
  }
  
}

// Default destructor function 
Mountains::~Mountains() {
 
}
