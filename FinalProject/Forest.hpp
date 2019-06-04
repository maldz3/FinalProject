//
//  Forest.hpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#ifndef Forest_hpp
#define Forest_hpp

#include "Space.hpp"

class Forest : public Space
{
  
private:

  
public:
  Forest();
  void intro() override;
  int events() override;
  ~Forest() override;
  
};

#endif /* Forest_hpp */
