/******************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the implementation file for Item class that has a string variable
 ** type, a constructor that takes in a string type, a getter, and a destructor.
 ******************************************************************************************/

#include "Item.hpp"


Item::Item(std::string typeIn)
{
  type = typeIn;
}


std::string Item::getType()
{
  return type;
}


Item::~Item()
{}
