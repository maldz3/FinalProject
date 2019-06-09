/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the implementation file for the Quest class where the simulation of
 ** the gane is programmed.  It has member variables daysLeft, currentLocation, gameOver bool,
 ** menu, and hero.  Methods provide an intro and gameplay that deals with the events in
 ** each location and allow the user to travel btween locations.
 ********************************************************************************************/


#include "Quest.hpp"

#include <iostream>


// Constructor that initilaizes a user inputted name for a hero, sets daysLeft to 20,
// gameOver to false, and currentLocation to shire
Quest::Quest() {
  
  std::string nameIn;
  std::cout << "What is your name hero?  ";
  std::getline(std::cin, nameIn);
  std::cout << std::endl;
  
  hero = new Hero(nameIn);
  daysLeft = 20;
  gameOver = false;
  currentLocation = map.getCurrentLocation();
  
}

// intro function that provides the background to the game, and displays a map
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
  
  showMap(); // displays a map of the game locations
  
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

// showMap that calls the Map's displayMap function to print the map
void Quest::showMap()
{
  map.displayMap();
}

// play function that deals with the events and allows the player to travel until the game is over
void Quest::play()
{
  
  intro();
  
  while (!gameOver) {
    
    std::cout << std::endl;
    std::cout << "*** " << currentLocation->getName() << "! ***" << std::endl;
    std::cout << std::endl;
    
    currentLocation->intro();
    daysLeft -= currentLocation->getDays(); // subtracts days per the location
    outOfTime(); // checks if days have run out
    
    int choice = 0;
    
    // checks if all items are present when player enters Mordor
    if (currentLocation->getType() == "mordor") {
      checkVictory();
    }
    
    if (!gameOver) {

      menu.showEvents();
      choice = menu.chooseMenu();
    }
    
    while (choice == 1 && gameOver == false) { // randoms events per the location
      
      int event = currentLocation->events();
      
      if (event == 1) { // special item found and added to array if not there
        hero->collectItem();
      }
      
      else if (event == 2) { // food found and energy increments by one
        hero->eatFood();
      }
      
      else if (event == 3) { // enemy encountered, if weapon use, or energy decrements by 3
        hero->fightOrc();
        heroDead(); // checks if energy is <= 0
      }
      
      else if (event == 4) { // weapon found and added to empty spot in array (backpack)
        hero->collectWeapon();
      }
      
      else { // waste of time event that decrements days
        daysLeft -= 1;
        outOfTime(); // checks if days have run out
      }
      
      if (!gameOver) { // gives player menu choices if game is not over
        menu.showEvents();
        choice = menu.chooseMenu();
      }
      
    }
    
    if (choice == 2) { // travel to another location
      
      // user output of map, backpack items, energy, abd days left
      std::cout << std::endl;
      showMap();
      std::cout << std::endl;
      std::cout << "Your pack contains:" << std::endl;
      hero->printItems();
      std::cout << "Your energy is " << hero->getEnergy() << std::endl;
      std::cout << std::endl;
      std::cout << "You have " << daysLeft << " days left" << std::endl;
      std::cout << std::endl;
      
      menu.showDirection(currentLocation); // shows direction choices for travel
      std::string dir = menu.chooseDirection();
      
      bool direction = false;
      
      // if pointer doesn't point to null, then player can choose that direction
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
      
      // updates the current location
      map.setCurrentLocation(currentLocation);
      hero->setLocation(currentLocation);
      
    }
  }
  
}

// heroDead function that checks if energy is <= 0 and ends game if it is
void Quest::heroDead()
{
  if (hero->isDead()) {
    gameOver = true;
    std::cout << std::endl;
    std::cout << "Hero you have run out of energy and perished, perhaps someone else will save Middle_Earth..." << std::endl;
    std::cout << std::endl;
  }
}

// outOfTime function that checks if daysLeft is <= 0 and ends game if it is
void Quest::outOfTime()
{
  if (daysLeft <= 0) {
    gameOver = true;
    std::cout << std::endl;
    std::cout << "Hero you have run out of time, only a miracle can now save Middle_Earth..." << std::endl;
    std::cout << std::endl;
  }
}

// checkVictory function that checks the array for all 4 special items
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

// Destructor function that deletes the hero pointer and sets it to null
Quest::~Quest() {

  delete hero;
  hero = nullptr;
  
}
