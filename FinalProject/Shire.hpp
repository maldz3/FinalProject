/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the specification file for the Shire class that inherits from Space.
 ** Methods are a constructor that takes in a name string, an intro function, and events
 ********************************************************************************************/


#ifndef Shire_hpp
#define Shire_hpp

#include "Space.hpp"

class Shire : public Space
{
  
private:
  
  
public:
  Shire(std::string);
  void intro() override;
  int events() override;
  ~Shire() override;
  
  //std::string getType() override;
  
  
};

#endif /* Shire_hpp */
