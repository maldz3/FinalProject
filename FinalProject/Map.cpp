/******************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the implementation file for Map class that initializes pointers to
 ** all 9 Space locations and current location, connects the spaces through their internal
 ** pointers, and displays a visual map of the spaces.
 ******************************************************************************************/

#include "Map.hpp"

#include <iostream>


// Constructor that initializes pointers to the 9 Space locations and the current location
Map::Map() { 
  
  shire = new Shire("Shire");
  rohan = new Kingdom("Rohan");
  rivendell = new Kingdom("Rivendell");
  gondor = new Kingdom("Gondor");
  mirkwood = new Forest("Mirkwood");
  lothlorien = new Forest("Lothlorien");
  fangorn = new Forest("Fangorn");
  moria = new Mountains("Moria");
  misty = new Mountains("Misty");
  erebor = new Mountains("Erebor");
  mordor = new Mordor("Mordor");
  currentLocation = shire;
  
  createMap();
  
}

// createMap function that connects the spaces via their internal pointers
void Map::createMap() {
  
  shire->setUp(moria);
  shire->setDown(mirkwood);
  shire->setRight(rivendell);
  
  moria->setDown(rivendell);
  moria->setLeft(shire);
  moria->setRight(rohan);
  
  rivendell->setUp(moria);
  rivendell->setDown(mirkwood);
  rivendell->setLeft(shire);
  rivendell->setRight(lothlorien);
  
  mirkwood->setUp(rivendell);
  mirkwood->setLeft(shire);
  mirkwood->setRight(misty);
  
  rohan->setDown(lothlorien);
  rohan->setLeft(rivendell);
  rohan->setRight(fangorn);
  
  lothlorien->setUp(rohan);
  lothlorien->setDown(misty);
  lothlorien->setLeft(rivendell);
  lothlorien->setRight(erebor);
  
  misty->setUp(lothlorien);
  misty->setLeft(mirkwood);
  misty->setRight(gondor);
  
  fangorn->setDown(erebor);
  fangorn->setLeft(rohan);
  fangorn->setRight(mordor);
  
  erebor->setUp(fangorn);
  erebor->setDown(gondor);
  erebor->setLeft(lothlorien);
  erebor->setRight(mordor);
  
  gondor->setUp(erebor);
  gondor->setLeft(misty);
  gondor->setRight(mordor);
  
  mordor->setUp(fangorn);
  mordor->setDown(gondor);
  mordor->setLeft(erebor);
  
}

// displayMap function that outputs a visual map for the user
void Map::displayMap()
{
  
  std::cout << std::endl;
  std::cout << "   |---------|Moria|----------|Rohan|-------|Fangorn|--------|" << std::endl;
  std::cout << "   |             |               |              |            |" << std::endl;
  std::cout << "|Shire|-----|Rivendell|-----|Lothlorien|-----|Erebor|-----|Mordor|" << std::endl;
  std::cout << "   |             |               |              |            |" << std::endl;
  std::cout << "   |--------|Mirkwood|--------|Misty|--------|Gondor|--------|" << std::endl;
  std::cout << std::endl;
  
}

// getter that returns the current location of the hero
Space *Map::getCurrentLocation() {
  return currentLocation;
}

// setter that sets the hero's current location
void Map::setCurrentLocation(Space *loc) {
  currentLocation = loc;
}

// Destructor that deletes the pointers and assigns them to null
Map::~Map() {

  delete shire;
  shire = nullptr;
  delete rohan;
  rohan = nullptr;
  delete rivendell;
  rivendell = nullptr;
  delete gondor;
  gondor = nullptr;
  delete mirkwood;
  mirkwood = nullptr;
  delete lothlorien;
  lothlorien = nullptr;
  delete fangorn;
  fangorn = nullptr;
  delete moria;
  moria = nullptr;
  delete misty;
  misty = nullptr;
  delete erebor;
  erebor = nullptr;
  delete mordor;
  mordor = nullptr;
  currentLocation = nullptr;
  
  
}


