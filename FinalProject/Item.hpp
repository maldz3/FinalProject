/******************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the specification file for Item class that has a string variable
 ** type, a constructor that takes in a string type, a getter, and a destructor.
 ******************************************************************************************/

#ifndef Item_hpp
#define Item_hpp

#include <string>

class Item
{
  
private:
  std::string type;
  
public:
  Item(std::string);
  std::string getType();
  ~Item();
  
};

#endif /* Item_hpp */
