//
//  Item.hpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#ifndef Item_hpp
#define Item_hpp

#include <string>

class Item
{
  
private:
  std::string type;
  
public:
  Item(std::string);
  bool checkSpecialItems();
  bool checkFood();
  bool checkWeapon();
  ~Item();
  
};

#endif /* Item_hpp */
