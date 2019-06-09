/******************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the implementation file for Hero class that has variables energy,
 ** name, location, map, and backpack array of Items.  The hero interacts with each location.
 ******************************************************************************************/

#include "Hero.hpp"

#include <iostream>


// Constructor that assigns a user-inputted name, sets the energy to 10,
// and initializes the location
Hero::Hero(std::string nameIn) {
  
  setName(nameIn);
  energy = 10;
  location = map.getCurrentLocation();
  
}

// getter that returns the name
std::string Hero::getName() { 
  return name;
}

// setter that sets the name
void Hero::setName(std::string nameIn) {
  name = nameIn;
}

// getter that returns the energy
int Hero::getEnergy() { 
  return energy;
}

// setter that decrements by one and sets the new energy
void Hero::setEnergy(int num) {
  energy -= num;
}

// eatFood function that incremets the energy by one
void Hero::eatFood() { 
  energy++;
}

// fightOrc function that iterates through the backpack for a weapon and deletes (uses)
// it, energy is decremented by 3 if there is no weapon
void Hero::fightOrc() { 
  
  bool weapon = false;
  
  for (int i = 9; i >= 4; i--) { // check array from the 10th to the 4th position
    
    if (backpack[i] && weapon == false) {
      delete backpack[i];
      backpack[i] = nullptr;
      weapon = true; // allows only one weapon to be used
      
      std::cout << "You have vanquished the enemy!" << std::endl;
    }
    
  }
  
  if (!weapon) {
    std::cout << "You are out of weapons and sustain injury, your energy has been depleted by 3!" << std::endl;
    setEnergy(3);
  }
}

// collectWeapon function adds a weapon to the array if there is space (null)
void Hero::collectWeapon() {
  
  bool weapon = false;
  
  for (int i = 4; i < 10; i++) {
    
    if (backpack[i] == nullptr && weapon == false) {
      backpack[i] = new Item("weapon");
      weapon = true;
    }
  }
  
}

// collectItem function that adds the specual item to the array based on the type
// of the location
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

// printItems function that outputs the items in the backpack
void Hero::printItems() { 
  
  for (int i = 0; i < 10; i++) {
    if (backpack[i]) {
      std::cout << backpack[i]->getType() << std::endl;
    }
  }
  
  std::cout << std::endl;
}

// setter that sets the current location of the hero
void Hero::setLocation(Space *loc) {
  location = loc;
}

// isDead function that returns true if the energy is <= 0
bool Hero::isDead()
{
  if (energy <= 0) {
    return true;
  }
  return false;
}

// checkSpecialItems function that checks if the first 4 positions in the array are filled
bool Hero::checkSpecialItems()
{
  for (int i = 0; i < 4; i++) {
    
    if (!backpack[i]) {
      return false;
    }
  }
    
  return true;
}

// Destructor that iterates throught the array and deletes any pointer to an Item
Hero::~Hero() { 
  
  for (int i = 0; i < 10; i++) {
    if (backpack[i]) {
      delete backpack[i];
      backpack[i] = nullptr;
    }
  }
  
}
