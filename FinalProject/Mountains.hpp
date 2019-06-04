//
//  Mountains.hpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#ifndef Mountains_hpp
#define Mountains_hpp

#include "Space.hpp"

class Mountains : public Space
{

private:
  
  
public:
  Mountains();
  void intro() override;
  int events() override;
  ~Mountains() override;
};

#endif /* Mountains_hpp */
