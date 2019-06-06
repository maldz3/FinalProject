//
//  Quest.cpp
//  FinalProject
//
//  Created by Maliha Syed on 5/30/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#include "Quest.hpp"

#include <iostream>


Quest::Quest() {
  
  gameOver = false;
  std::string nameIn;
  std::cout << "What is your name hero?  ";
  std::cin >> nameIn;
  std::cout << std::endl;
  hero = new Hero(nameIn);
  daysLeft = 20;
  currentLocation = map.getCurrentLocation();
  
}

void Quest::intro()
{

  std::cout << "************************************************************************************" << std::endl;
  std::cout << std::endl;
  std::cout << "Welcome to your quest hero " << hero->getName() << "!" << std::endl;
  std::cout << std::endl;
  std::cout << "Middle Earth is still in turmoil, the darkness and filth of Mordor is beginning" << std::endl;
  std::cout << "to spread. A special hero is needed to go on a quest to cleanse the defeated Dark" << std::endl;
  std::cout << "Lord's land, and return light to the East." << std::endl;
  std::cout << std::endl;
  
  std::cout << "There are four special items that must be discovered and taken to Mordor before" << std::endl;
  std::cout << "Durin's Day, just 20 days hence!" << std::endl;
  std::cout << std::endl;
  std::cout << "- An acorn from the tree that Bilbo planted as a seed from Beorn's garden," << std::endl;
  std::cout << "- Eldar light imbued water from the forests of the elves," << std::endl;
  std::cout << "- Ancient scrolls of magic found throughout the kingdoms of men," << std::endl;
  std::cout << "- Mithril found only inside the deepest parts of mountains where the dwarves dwell" << std::endl;
  std::cout << std::endl;
  
  std::cout << "If you choose to go on this perilous journey remember, you have only 20 days before" << std::endl;
  std::cout << "the darkness will be beyond repair, and the world as we know will cease to exist." << std::endl;
  std::cout << std::endl;
  
  showMap();
  
  std::cout << std::endl;
  std::cout << "-Kingdoms-" << std::endl;
  std::cout << "Rohan, Rivendell, and Gondor are three kingdoms of Middle-Earth, " << std::endl;
  std::cout << "The journey through these will take 2 days and here also you will find great " << std::endl;
  std::cout << "weapons to use against the marauding orcs." << std::endl;
  std::cout << std::endl;
  
  std::cout << "-Mountains-" << std::endl;
  std::cout << "Moria, the Misty Mountains, and Erebor are three mountain ranges of Middle-Earth, " << std::endl;
  std::cout << "The journey through here is a short-cut and will take 1 day.  However there are" << std::endl;
  std::cout << "many dangerous enemies and you will need weapons to fight them all." << std::endl;
  std::cout << std::endl;
  
  std::cout << "-Forests-" << std::endl;
  std::cout << "Mirkwood, Loth Lorien, and Fangorn are three forests in Middle-Earth where there" << std::endl;
  std::cout << "is ancient magic of the elves.  The journey here is safer but the serenity will " << std::endl;
  std::cout << "cause you to linger for 3 days.  You will find necessary elven sustenance here also." << std::endl;
  std::cout << std::endl;
  std::cout << "************************************************************************************" << std::endl;
  
  
  
  
}

void Quest::showMap()
{
  map.displayMap();
}


void Quest::play()
{
  
  intro();
  
  while (!gameOver) {
    
    std::cout << std::endl;
    std::cout << "*** " << currentLocation->getName() << "! ***" << std::endl;
    std::cout << std::endl;
    
    currentLocation->intro();
    daysLeft -= currentLocation->getDays();
    
    int choice = 0;
    
    if (currentLocation->getType() == "mordor") {
      checkVictory();
    }
    
    if (!gameOver) {

      menu.showEvents();
      choice = menu.chooseMenu();
    }
    
    while (choice != 2 && gameOver == false) {
      
      int event = currentLocation->events();
      
      if (event == 1) {
        hero->collectItem();
      }
      
      else if (event == 2) {
        hero->eatFood();
      }
      
      else if (event == 3) {
        hero->fightOrc();
        heroDead();
      }
      
      else if (event == 4) {
        hero->collectWeapon();
      }
      
      else {
        daysLeft -= 1;
      }
      
      if (!gameOver) {
        menu.showEvents();
        choice = menu.chooseMenu();
      }
      
    }
    
    if (choice == 2) {
      
      std::cout << std::endl;
      showMap();
      std::cout << std::endl;
      std::cout << "Your pack contains:" << std::endl;
      hero->printItems();
      std::cout << "Your energy is " << hero->getEnergy() << std::endl;
      std::cout << std::endl;
      std::cout << "You have " << daysLeft << " days left" << std::endl;
      std::cout << std::endl;
      
      menu.showDirection(currentLocation);
      std::string dir = menu.chooseDirection();
      
      bool direction = false;
      
      while (!direction) {
        
        if (dir == "n") {
          if (!currentLocation->getUp()) {
            std::cout << "You cannot go in that direction" << std::endl;
            menu.showDirection(currentLocation);
            dir = menu.chooseDirection();
          }
          else {
            currentLocation = currentLocation->getUp();
            direction = true;
          }
        }
        else if (dir == "s") {
          if (!currentLocation->getDown()) {
            std::cout << "You cannot go in that direction" << std::endl;
            menu.showDirection(currentLocation);
            dir = menu.chooseDirection();
          }
          else {
            currentLocation = currentLocation->getDown();
            direction = true;
          }
        }
        else if (dir == "e") {
          if (!currentLocation->getRight()) {
            std::cout << "You cannot go in that direction" << std::endl;
            menu.showDirection(currentLocation);
            dir = menu.chooseDirection();
          }
          else {
            currentLocation = currentLocation->getRight();
            direction = true;
          }
        }
        else if (dir == "w") {
          if (!currentLocation->getLeft()) {
            std::cout << "You cannot go in that direction" << std::endl;
            menu.showDirection(currentLocation);
            dir = menu.chooseDirection();
          }
          else {
            currentLocation = currentLocation->getLeft();
            direction = true;
          }
        }
      }
      
      map.setCurrentLocation(currentLocation);
      hero->setLocation(currentLocation);
      
    }
  }
  
}

void Quest::heroDead()
{
  if (hero->isDead()) {
    gameOver = true;
    std::cout << std::endl;
    std::cout << "Hero you have run out of energy and perished, perhaps someone else will save Middle_Earth..." << std::endl;
    std::cout << std::endl;
  }
}


void Quest::outOfTime()
{
  if (daysLeft <= 0) {
    gameOver = true;
    std::cout << std::endl;
    std::cout << "Hero you have run out of time, only a miracle now can save Middle_Earth..." << std::endl;
    std::cout << std::endl;
  }
}

void Quest::checkVictory()
{
  if (hero->checkSpecialItems()) {
    gameOver = true;
    std::cout << std::endl;
    std::cout << "Yes!  All the items are found and you have placed them correctly..." << std::endl;
    std::cout << std::endl;
    std::cout << hero->getName() << " you have saved Middle_Earth, the cleansing has already started and the light" << std::endl;
    std::cout << "is beginning to spread.  You will be remembered and the elves will sing of your deeds!" << std::endl;
    std::cout << std::endl;
  }
}


Quest::~Quest() {

  delete hero;
  hero = nullptr;
  
  
}
