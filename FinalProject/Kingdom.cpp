//
//  Kingdom.cpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#include "Kingdom.hpp"

#include <iostream>


Kingdom::Kingdom() { 
  
  type = "kingdom";
  days = 2;
  
}

void Kingdom::intro() { 
  
  std::cout << std::endl;
  std::cout << "You have entered the a kingdom of men, where many weapons can be found." << std::endl;
  std::cout << "The magic scrolls are hidden here if you can get to them first..." << std::endl;
  std::cout << std::endl;
  
}

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
    std::cout << "You attend a royal banquet thrown in your honor!" << std::endl;
    return 0;
  }
  
}

Kingdom::~Kingdom() { 

}
