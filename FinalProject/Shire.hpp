//
//  Shire.hpp
//  FinalProject
//
//  Created by Maliha Syed on 5/30/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#ifndef Shire_hpp
#define Shire_hpp

#include "Space.hpp"

class Shire : public Space
{
  
private:
  
  
public:
  Shire(std::string);
  void intro() override;
  int events() override;
  ~Shire() override;
  
  //std::string getType() override;
  
  
};

#endif /* Shire_hpp */
