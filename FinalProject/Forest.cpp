/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the implementation file for the Forest class that inherits from Space.
 ** Methods are a constructor that takes in a name string, an intro function, and events
 ********************************************************************************************/


#include "Forest.hpp"

#include <iostream>


// Constructor that assigns the type, days, and an inputted name
Forest::Forest(std::string nameIn)
{
  name = nameIn;
  type = "forest";
  days = 3;
}

// intro function that outputs an introduction for the location
void Forest::intro() {
  
  std::cout << std::endl;
  std::cout << "You are in the Forest, where there is food aplenty, but be wary of hidden dangers." << std::endl;
  std::cout << "The water of the Eldar can be found here if the fates wish it..." << std::endl;
  std::cout << std::endl;
  
}

// events function that outputs random events at different percentages and returns an integer
int Forest::events() {
  
  int num = rand() % 100 + 1;
  
  if (num <= 25) {
    std::cout << "You have found the water of the Eldar!" << std::endl;
    return 1;
  }
  
  if (num <= 55) {
    std::cout << "You are given the special food of the elves to aid you on your journey" << std::endl;
    return 2;
  }
  
  if (num <= 70) {
    std::cout << "You are surrounded by giant spiders, use your weapons to defeat them!" << std::endl;
    return 3;
  }
  
  else {
    std::cout << "You sing with the elves and rest peacefully for a whole day." << std::endl;
    return 0;
  }
  
}

// Default destructor function 
Forest::~Forest()
{
  
}



