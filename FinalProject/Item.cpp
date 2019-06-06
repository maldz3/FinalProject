//
//  Item.cpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#include "Item.hpp"


Item::Item(std::string typeIn)
{
  type = typeIn;
}


std::string Item::getType()
{
  return type;
}

//bool Item::checkSpecialItems() {
//
//  if (type == "special") {
//    return true;
//  }
//  return false;
//
//}
//

bool Item::checkWeapon() {

  if (type == "weapon") {
    return true;
  }
  return false;

}

Item::~Item()
{}
