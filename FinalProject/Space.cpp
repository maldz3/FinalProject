/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the implementation file for abstract Space class that has 4 pointer
 ** variables, a name, a type, days, and getters and setters for the variables
 ********************************************************************************************/


#include "Space.hpp"


// Default constructor that assigns variables to nullptr, 0, and empty string
Space::Space()
{
  
  name = "";
  type = "";
  days = 0;
  up = nullptr;
  down = nullptr;
  left = nullptr;
  right = nullptr;

}

// getter that return days
int Space::getDays() { 
  return days;
}

// getter that returns type
std::string Space::getType() {
  return type;
}

// getter that returns name
std::string Space::getName() {
  return name;
}

// getter that returns the up Space pointer
Space *Space::getUp() { 
  return up;
}

// getter that returns the down Space pointer
Space *Space::getDown() { 
  return down;
}

// getter that returns the left Space pointer
Space *Space::getLeft() { 
  return left;
}

// getter that returns the right Space pointer
Space *Space::getRight() { 
  return right;
}

// setter that sets the up Space pointer
void Space::setUp(Space *upIn) {
  up = upIn;
}

// setter that sets the down Space pointer
void Space::setDown(Space *downIn) {
  down = downIn;
}

// setter that sets the left Space pointer
void Space::setLeft(Space *leftIn) {
  left = leftIn;
}

// setter that sets the right Space pointer
void Space::setRight(Space *rightIn) {
  right = rightIn;
}


// Destructor that sets all pointers to null
Space::~Space() {
  
  up = nullptr;
  down = nullptr;
  left = nullptr;
  right = nullptr;
  
}


