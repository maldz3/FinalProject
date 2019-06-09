/******************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the specification file for Hero class that has variables energy,
 ** name, location, map, and backpack array of Items.  The hero interacts with each location.
 ******************************************************************************************/


#ifndef Hero_hpp
#define Hero_hpp

#include "Item.hpp"
#include "Space.hpp"
#include "Shire.hpp"
#include "Mordor.hpp"
#include "Kingdom.hpp"
#include "Mountains.hpp"
#include "Forest.hpp"
#include "Map.hpp"

#include <string>

class Hero
{
  
private:
  std::string name;
  int energy;
  Item *backpack [10] = {nullptr};
  Space *location;
  Map map;
  
  
public:
  Hero(std::string);
  std::string getName();
  void setName(std::string);
  int getEnergy();
  void setEnergy(int num);
  void eatFood();
  void fightOrc();
  void collectWeapon();
  void collectItem();
  void printItems();
  void setLocation(Space *);
  bool checkSpecialItems();
  bool isDead();
  ~Hero();
  
  
};

#endif /* Hero_hpp */
