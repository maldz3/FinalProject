/********************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the specification file for abstract Space class that has 4 pointer
 ** variables, a name, a type, days, and getters and setters for the variables.  It also has
 ** pure virtual functions intro and events that are overridden in the derived classes
 ********************************************************************************************/


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
