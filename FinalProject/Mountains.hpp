/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the specification file for the Mountains class that inherits from Space.
 ** Methods are a constructor that takes in a name string, an intro function, and events
 ********************************************************************************************/


#ifndef Mountains_hpp
#define Mountains_hpp

#include "Space.hpp"

class Mountains : public Space
{

private:
  
  
public:
  Mountains(std::string);
  void intro() override;
  int events() override;
  ~Mountains() override;
};

#endif /* Mountains_hpp */
