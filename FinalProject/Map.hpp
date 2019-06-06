//
//  Map.hpp
//  FinalProject
//
//  Created by Maliha Syed on 5/30/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#ifndef Map_hpp
#define Map_hpp

#include "Space.hpp"
#include "Shire.hpp"
#include "Mordor.hpp"
#include "Kingdom.hpp"
#include "Mountains.hpp"
#include "Forest.hpp"


class Map
{
  
private:
  Space *currentLocation;
  Shire *shire;
  Kingdom *rohan;
  Kingdom *rivendell;
  Kingdom *gondor;
  Forest *mirkwood;
  Forest *lothlorien;
  Forest *fangorn;
  Mountains *moria;
  Mountains *misty;
  Mountains *erebor;
  Mordor *mordor;
  
  void createMap();
  
public:
  Map();
  void displayMap();
  Space *getCurrentLocation();
  void setCurrentLocation(Space *);
  ~Map();
  
  
};


#endif /* Map_hpp */
