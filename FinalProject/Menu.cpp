/******************************************************************************************
 ** Program name: Final Project = Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the class implementation file for the Menu class that prints three
 ** menus for the user and validates a user choice,
 ******************************************************************************************/

#include "Menu.hpp"
#include "InputValidation.hpp"


#include <iostream>


// showOptions function that prints out the options to play again or exit
void Menu::showOptions()
{
  std::cout << std::endl;
  std::cout << "-------------------------------------" << std::endl;
  std::cout << "         CHOOSE QUEST OPTIONS" << std::endl;
  std::cout << "-------------------------------------" << std::endl;
  std::cout << "Play Again                  press[1]" << std::endl;
  std::cout << "Exit                        press[2]" << std::endl;
  std::cout << "-------------------------------------" << std::endl;
  std::cout << std::endl;
}

// chooseDirection that shows option for hero's travel
void Menu::showDirection(Space *location)
{
  
  std::cout << std::endl;
  std::cout << "-------------------------------------" << std::endl;
  std::cout << "  WHICH DIRECTION WILL YOU TRAVEL?" << std::endl;
  std::cout << "-------------------------------------" << std::endl;
  
  std::cout << location->getUp()->getType() << std::endl;
  
  if (location->getUp()) {
    std::cout <<  "[n]      "<< location->getUp()->getName() << std::endl;
  }
  
  if (location->getDown()) {
    std::cout <<  "[s]      "<< location->getDown()->getName() << std::endl;
  }
  
  if (location->getRight()) {
    std::cout <<  "[e]      "<< location->getRight()->getName() << std::endl;
  }
  
  if (location->getLeft()) {
    std::cout <<  "[w]      "<< location->getLeft()->getName() << std::endl;
  }
  
  std::cout << "-------------------------------------" << std::endl;
  std::cout << std::endl;
  
}

void Menu::showEvents()
{
  
  std::cout << std::endl;
  std::cout << "-------------------------------------" << std::endl;
  std::cout << "         CHOOSE NEXT STEP" << std::endl;
  std::cout << "-------------------------------------" << std::endl;
  std::cout << "Continue searching           press[1]" << std::endl;
  std::cout << "Travel to the next location  press[2]" << std::endl;
  std::cout << "-------------------------------------" << std::endl;
  std::cout << std::endl;
  
}

// chooseMenu function that returns the user's choice after validation
int Menu::chooseMenu()
{
  int choice = 0;
  
  std::cout << std::endl;
  std::cout << "Enter your choice: ";
  inputValidation(choice, 1, 2);
  std::cout << std::endl;
  
  return choice;
}

std::string Menu::chooseDirection() {
  
  std::string dir;
  std::cout << "Enter your choice: ";
  inputValidationDir(dir);
  
  return dir;
}

