/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the specification file for the Kingdom class that inherits from Space.
 ** Methods are a constructor that takes in a name string, an intro function, and events
 ********************************************************************************************/


#ifndef Kingdom_hpp
#define Kingdom_hpp

#include "Space.hpp"

class Kingdom : public Space
{
  
private:
  
  
public:
  Kingdom(std::string);
  void intro() override;
  int events() override;
  ~Kingdom() override;
  
};

#endif /* Kingdom_hpp */
