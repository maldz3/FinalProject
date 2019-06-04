//
//  Kingdom.hpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#ifndef Kingdom_hpp
#define Kingdom_hpp

#include "Space.hpp"

class Kingdom : public Space
{
  
private:
  
  
public:
  Kingdom();
  void intro() override;
  int events() override;
  ~Kingdom() override;
  
};

#endif /* Kingdom_hpp */
