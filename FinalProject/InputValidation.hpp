/******************************************************************************************
 ** Program name: Final Project - Quest for Middle-Earth
 ** Author: Maliha Syed
 ** Date: 5/25/2019
 ** Description: This is the specification file for input validation functions that can
 ** be used to validate an integer, string character, string name, decimal, or file name.
 ******************************************************************************************/


#ifndef InputValidation_hpp
#define InputValidation_hpp

#include <fstream>
#include <string>

void inputValidation(int &, int, int);
void inputValidation(std::string &);
void inputValidationDir(std::string &);
void inputValidationFile(std::ifstream &);
void inputValidation(double &, double, double);
void inputValidationString(std::string &);

#endif /* InputValidation_hpp */
