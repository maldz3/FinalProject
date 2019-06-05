//
//  Mountains.cpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#include "Mountains.hpp"

#include <iostream>


Mountains::Mountains() {
  
  type = "mountains";
  days = 1;
}

void Mountains::intro() { 
 
  std::cout << std::endl;
  std::cout << "You are in the mountains, beware of dangers lurking everywhere." << std::endl;
  std::cout << "The mithril you are searching for can be found here, in the deep dark..." << std::endl;
  std::cout << std::endl;
  
}

int Mountains::events() {
  
  int num = rand() % 100 + 1;
  
  if (num <= 25) {
    std::cout << "You have found some rare mithril!" << std::endl;
    return 1;
  }
  
  if (num <= 40) {
    std::cout << "You find a weapon forged by the dwarves!" << std::endl;
    return 4;
  }
  
  if (num <= 85) {
    std::cout << "You are ambushed by orcs, quickly use your weapons to defeat them!" << std::endl;
    return 3;
  }
  
  else {
    std::cout << "You are lost in the dark caves, keep searching" << std::endl;
    return 0;
  }
  
}

Mountains::~Mountains() {
 
}
