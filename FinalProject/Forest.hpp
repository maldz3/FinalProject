/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the specification file for the Forest class that inherits from Space.
 ** Methods are a constructor that takes in a name string, an intro function, and events
 ********************************************************************************************/


#ifndef Forest_hpp
#define Forest_hpp

#include "Space.hpp"

class Forest : public Space
{
  
private:

  
public:
  Forest(std::string);
  void intro() override;
  int events() override;
  ~Forest() override;
  
};

#endif /* Forest_hpp */
