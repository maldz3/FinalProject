//
//  Hero.hpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

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
