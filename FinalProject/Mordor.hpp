/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the specification file for the Mordor class that inherits from Space.
 ** Methods are a constructor that takes in a name string, an intro function, and events
 ********************************************************************************************/


#ifndef Mordor_hpp
#define Mordor_hpp

#include "Space.hpp"

class Mordor : public Space
{
  
private:
  
  
public:
  Mordor(std::string);
  void intro() override;
  int events() override;
  ~Mordor() override;
  
};

#endif /* Mordor_hpp */
