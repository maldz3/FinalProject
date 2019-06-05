//
//  Space.hpp
//  FinalProject
//
//  Created by Maliha Syed on 5/28/19.
//  Copyright © 2019 Maliha Syed. All rights reserved.
//

#ifndef Space_hpp
#define Space_hpp

#include <string>

class Space
{
  
protected:
  Space *up;
  Space *down;
  Space *left;
  Space *right;
  int days;
  std::string type;
  std::string name;
  
public:
  Space();
  Space *getUp();
  Space *getDown();
  Space *getLeft();
  Space *getRight();
  void setUp(Space *);
  void setDown(Space *);
  void setLeft(Space *);
  void setRight(Space *);
  virtual void intro() = 0;
  std::string getType();
  std::string getName();
  int getDays();
  virtual int events() = 0;
  virtual ~Space();
  
};

#endif /* Space_hpp */
