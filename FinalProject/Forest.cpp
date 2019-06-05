//
//  Forest.cpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#include "Forest.hpp"

#include <iostream>


Forest::Forest()
{

  type = "forest";
  days = 3;
}

void Forest::intro() {
  
  std::cout << std::endl;
  std::cout << "You are in the Forest, where there is food aplenty, be be wary." << std::endl;
  std::cout << "The water of the Eldar can be found here if the fates wish it..." << std::endl;
  std::cout << std::endl;
  
}

int Forest::events() {
  
  int num = rand() % 100 + 1;
  
  if (num <= 25) {
    std::cout << "You have found the water of the Eldar!" << std::endl;
    return 1;
  }
  
  if (num <= 55) {
    std::cout << "You are given the special food of the elves to aid you on your journey!" << std::endl;
    return 2;
  }
  
  if (num <= 70) {
    std::cout << "You are surrounded by giant spiders, use your weapons to vanquish them!" << std::endl;
    return 3;
  }
  
  else {
    std::cout << "You sing with the elves and rest peacefully for a time." << std::endl;
    return 0;
  }
  
}


Forest::~Forest()
{
  
}



