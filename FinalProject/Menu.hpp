/******************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the class specification file for the Menu class that prints three
 ** menus for the user and validates a user choice,
 ******************************************************************************************/


#ifndef Menu_hpp
#define Menu_hpp

#include "Space.hpp"

class Menu
{
  
public:
  
  void showOptions();
  void showDirection(Space *);
  void showEvents();
  std::string chooseDirection();
  int chooseMenu();
  
};

#endif /* Menu_hpp */
