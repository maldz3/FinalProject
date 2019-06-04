//
//  Map.cpp
//  FinalProject
//
//  Created by Maliha Syed on 5/30/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#include "Map.hpp"

#include <iostream>


Map::Map() { 
  
  currentLocation = shire;
  shire = new Shire;
  rohan = new Kingdom;
  rivendell = new Kingdom;
  gondor = new Kingdom;
  mirkwood = new Forest;
  lothlorien = new Forest;
  fangorn = new Forest;
  moria = new Mountains;
  misty = new Mountains;
  erebor = new Mountains;
  mordor = new Mordor;
  
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
  fangorn->setDown(mordor);
  
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
  delete currentLocation;
  currentLocation = nullptr;
  
  
}

Space *Map::getCurrentLocation() { 
  return currentLocation;
}

void Map::setCurrectLocation(Space *loc) {
  currentLocation = loc;
}

