/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the specification file for the Quest class where the simulation of
 ** the gane is programmed.  It has member variables daysLeft, currentLocation, gameOver bool,
 ** menu, and hero.  Methods provide an intro and gameplay that deals with the events in
 ** each location and allow the user to travel btween locations.
 ********************************************************************************************/


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
