/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the main file for the Final Project that initializes a Quest object
 ** and calls the play method to run the game.
 ********************************************************************************************/


#include "Quest.hpp"

#include <iostream>

int main() {
 
  srand( (unsigned int) time(0) ); // seeding for random number generator
  
  Quest quest;
  quest.play();
  
  return 0;
}
