//
//  Mordor.cpp
//  FinalProject
//
//  Created by Maliha Syed on 5/30/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#include "Mordor.hpp"
#include "Hero.hpp"

#include <iostream>


Mordor::Mordor(std::string nameIn)
{
  name = nameIn;
  type = "mordor";  
}

void Mordor::intro() { 
  
  std::cout << std::endl;
  std::cout << "You have entered Mordor, you can see the darkness creeping all around." << std::endl;
  std::cout << "It is almost too late!  Do you have all the special items?" << std::endl;
  std::cout << std::endl;
  
}

int Mordor::events() {
  return 0;
}


Mordor::~Mordor() { 
  
}


