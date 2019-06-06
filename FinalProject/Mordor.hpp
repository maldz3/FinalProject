//
//  Mordor.hpp
//  FinalProject
//
//  Created by Maliha Syed on 5/30/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

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
