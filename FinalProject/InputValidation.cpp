/******************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the implementation file for input validation functions that can
 ** be used to validate an integer, string character, string name, decimal, or file name.
 ******************************************************************************************/

#include "InputValidation.hpp"

#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>


//inputValidation for an integer passed by reference that loops with an invalid message
//if input contains a non digit in the string, if the string is empty, or else if the integer
//conversion of the string is out of the range of the min and max
void inputValidation (int &integer, int min, int max) {
  
  std::string input;
  const int MIN = min;
  const int MAX = max;
  
  // Citation (1)
  while ((std::getline(std::cin, input) && input[0] != '-' && input.end() != std::find_if_not(input.begin(), input.end(), &isdigit))
         || (input[0] == '-' && input.end() != std::find_if_not(input.begin() + 1, input.end(), &isdigit))
         || (input[0] == '-' && input.length() == 1) || (input[0] == '0' && input.length() > 1)
         || input.length() == 0 || input.length() > 6 || (stoi(input) < MIN || stoi(input) > MAX))
  {
    std::cout << "Invalid input, please enter " << MIN << " or " << MAX << std::endl;
  }
  
  integer = stoi(input);
}


//inputValidation for a string passed by reference that loops with an invalid message
//if input is empty, has more than one character, or isn't a "y" or "n"
void inputValidation (std::string &character) {
  
  std::string input;
  
  while(std::getline(std::cin, input) && (input.length() == 0 || input.length() > 1 ||
                                          (input != "y" && input != "n")))
  {
    std::cout << "Invalid input, enter y or n" << std::endl;
  }
  
  character = input;
  
}


//inputValidation for a string passed by reference that loops with an invalid message
//if input is empty, has more than one character, or isn't a "n", "s", "e", or "w"
void inputValidationDir(std::string &direction) {
  
  std::string input;
  
  while(std::getline(std::cin, input) && (input.length() == 0 || input.length() > 1 ||
                                          (input != "n" && input != "s" && input != "e" && input != "w" )))
  {
    std::cout << "Invalid input, enter n, s, e, w" << std::endl;
  }
  
  direction = input;
  
}


//inputValidation for the existence of a file name
void inputValidationFile(std::ifstream &ifs) {
  
  std::string fileName;
  std::cout << "What is the name of the file you want to read from (file_fun.txt)?" << std::endl;
  std::cin >> fileName;
  ifs.open(fileName);
  
  while(!ifs){ //loop if file does not exist
    
    std::cout << "File does not exist, try again please" << std::endl;
    std::cin >> fileName;
    ifs.open(fileName);
  }
  
}


//inputValidation for a decimal double passed by reference
void inputValidation(double &decimal, double min, double max) {
  
  std::string input;
  const double MIN = min;
  const double MAX = max;
  
  while ((std::getline(std::cin, input) && (!std::isdigit(input[0]) || !std::isdigit(input[2]) || input[1] != '.' || input.length() == 0 || input.length() > 3 || (stod(input) < MIN || stod(input) > MAX))))
  {
    std::cout << "Invalid input, please enter a decimal number between " << MIN << " and " << MAX << std::endl;
  }
  
  decimal = stod(input);
  
}


//inputValidation for a string name with length restrictions
void inputValidationString(std::string &strIn) {
  
  std::string input;
  
  while ((std::getline(std::cin, input) && input.end() !=
          std::find_if_not(input.begin(), input.end(), &isalpha)) ||
         input.length() == 0 || input.length() > 20)
  {
    std::cout << "Invalid input, please enter a valid string of up to 20 letters" << std::endl;
  }
  
  strIn = input;
  
}


/*
 Citations:
 (1) - https://stackoverflow.com/questions/35954159/how-can-i-validate-an-integer-input
 */
