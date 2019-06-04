//
//  main.cpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//
#include "Quest.hpp"

#include <iostream>

int main() {
 
  srand( (unsigned int) time(0) ); // seeding for random number generator
  
  Quest quest;
  quest.play();
  
  return 0;
}
