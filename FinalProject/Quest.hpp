//
//  Quest.hpp
//  FinalProject
//
//  Created by Maliha Syed on 5/30/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#ifndef Quest_hpp
#define Quest_hpp

#include "Map.hpp"
#include "Hero.hpp"
#include "Space.hpp"
#include "Menu.hpp"


class Quest
{
  
private:
  Space *currentLocation;
  Hero *hero;
  int daysLeft;
  Map map;
  Menu menu;
  bool gameOver;
  
public:
  Quest();
  void intro();
  void play();
  void showMap();
  void heroDead();
  void outOfTime();
  void checkVictory();
  ~Quest();
  
};

#endif /* Quest_hpp */
