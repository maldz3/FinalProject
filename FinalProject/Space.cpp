//
//  Space.cpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#include "Space.hpp"


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


int Space::getDays() { 
  return days;
}


std::string Space::getType() {
  return type;
}

std::string Space::getName() {
  return name;
}


Space::~Space() {
  
  up = nullptr;
  down = nullptr;
  left = nullptr;
  right = nullptr;
  
}

Space *Space::getUp() { 
  return up;
}

Space *Space::getDown() { 
  return down;
}

Space *Space::getLeft() { 
  return left;
}

Space *Space::getRight() { 
  return right;
}

void Space::setUp(Space *upIn) {
  up = upIn;
}

void Space::setDown(Space *downIn) {
  down = downIn;
}

void Space::setLeft(Space *leftIn) {
  left = leftIn;
}

void Space::setRight(Space *rightIn) {
  right = rightIn;
}




