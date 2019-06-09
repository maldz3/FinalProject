/******************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the specification file for Map class that initializes pointers to
 ** all 9 Space locations and current location, connects the spaces through their internal
 ** pointers, and displays a visual map of the spaces.
 ******************************************************************************************/


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
