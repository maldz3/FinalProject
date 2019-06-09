/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the implementation file for the Mordor class that inherits from Space.
 ** Methods are a constructor that takes in a name string, an intro function, and events
 ********************************************************************************************/


#include "Mordor.hpp"
#include "Hero.hpp"

#include <iostream>


// Constructor that assigns the type and an inputted name
Mordor::Mordor(std::string nameIn)
{
  name = nameIn;
  type = "mordor";  
}

// intro function that outputs an introduction for the location
void Mordor::intro() { 
  
  std::cout << std::endl;
  std::cout << "You have entered Mordor, you can see the darkness creeping all around." << std::endl;
  std::cout << "It is almost too late!  Do you have all the special items?" << std::endl;
  std::cout << std::endl;
  
}

// events function that returns an integer
int Mordor::events() {
  std::cout << "No, go back and return with the missing items before it is too late!." << std::endl;
  return 0;
}

// Default destructor function 
Mordor::~Mordor() { 
  
}


