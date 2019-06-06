//
//  Hero.cpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#include "Hero.hpp"

#include <iostream>


Hero::Hero(std::string nameIn) {
  
  setName(nameIn);
  energy = 10;
  location = map.getCurrentLocation();
  
}

std::string Hero::getName() { 
  return name;
}

void Hero::setName(std::string nameIn) {
  name = nameIn;
}

int Hero::getEnergy() { 
  return energy;
}

void Hero::setEnergy(int num) {
  energy -= num;
}

void Hero::eatFood() { 
  energy++;
}

void Hero::fightOrc() { 
  
  bool weapon = false;
  
  for (int i = 9; i >= 4; i--) {
    
    if (backpack[i] && weapon == false) {
      delete backpack[i];
      backpack[i] = nullptr;
      weapon = true;
      std::cout << "You have vanquished the enemy!" << std::endl;
    }
    
  }
  
  if (!weapon) {
    std::cout << "You are out of weapons and sustain injury, your energy has been depleted by 3!" << std::endl;
    setEnergy(3);
  }
}

void Hero::collectWeapon() {
  
  bool weapon = false;
  
  for (int i = 4; i < 10; i++) {
    
    if (backpack[i] == nullptr && weapon == false) {
      backpack[i] = new Item("weapon");
      weapon = true;
    }
  }
  
}

void Hero::collectItem()
{
  
  if (location->getType() == "shire" && !backpack[0]) {
    backpack[0] = new Item("acorn");
  }
  if (location->getType() == "forest" && !backpack[1]) {
    backpack[1] = new Item("water");
  }
  if (location->getType() == "mountains" && !backpack[2]) {
    backpack[2] = new Item("mithril");
  }
  if (location->getType() == "kingdom" && !backpack[3]) {
    backpack[3] = new Item("scroll");
  }
  
}

void Hero::printItems() { 
  
  for (int i = 0; i < 10; i++) {
    if (backpack[i]) {
      std::cout << backpack[i]->getType() << std::endl;
    }
  }
  
  std::cout << std::endl;
}


void Hero::setLocation(Space *loc) {
  location = loc;
}


bool Hero::isDead()
{
  if (energy <= 0) {
    return true;
  }
  return false;
}

bool Hero::checkSpecialItems()
{
  for (int i = 0; i < 4; i++) {
    
    if (!backpack[i]) {
      return false;
    }
  }
    
  return true;
}


Hero::~Hero() { 
  
  for (int i = 0; i < 10; i++) {
    if (backpack[i]) {
      delete backpack[i];
      backpack[i] = nullptr;
    }
  }
  
}
