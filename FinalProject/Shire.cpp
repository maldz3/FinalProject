//
//  Shire.cpp
//  FinalProject
//
//  Created by Maliha Syed on 5/30/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#include "Shire.hpp"

#include <iostream>


Shire::Shire()
{
  type = "shire";

}


void Shire::intro() {
  
  std::cout << std::endl;
  std::cout << "You are in the Shire, this is where your quest begins." << std::endl;
  std::cout << "The special acorn seed can be found here if you search hard enough..." << std::endl;
  std::cout << std::endl;
  
}

int Shire::events() {
  
  int num = rand() % 10 + 1;
  
  if (num <= 4) {
    std::cout << "You've found the special item acorn!" << std::endl;
    return 1;
  }
  
  if (num <= 8) {
    std::cout << "You were invited to a hobbit party and got some energy!" << std::endl;
    return 2;
  }
  
  else {
    std::cout << "You went to the inn, sang and made merry!" << std::endl;
    return 0;
  }
  
}

Shire::~Shire()
{

}




