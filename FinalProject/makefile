# Program name: Final Project - Quest to Save Middle-Earth
# Author: Maliha Syed
# Date: 5/25/2019
# Description: Makefile for Final Project

CXX = g++
CXXFLAGS = -std=c++11
CXXFLAGS += -Wall
OBJS = main.o InputValidation.o Menu.o Space.o Quest.o Kingdom.o Mountains.o Forest.o Shire.o Mordor.o Map.o Hero.o Item.o
SRCS = main.cpp InputValidation.cpp Menu.cpp Space.cpp Quest.cpp Kingdom.cpp Mountains.cpp Forest.cpp Shire.cpp Mordor.cpp Map.cpp Hero.cpp Item.cpp
HEADERS = InputValidation.hpp Menu.hpp Space.hpp Quest.hpp Kingdom.hpp Mountains.hpp Forest.hpp Shire.hpp Mordor.hpp Map.hpp Hero.hpp Item.hpp

lotr: $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o lotr

main.o: main.cpp Menu.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp

InputValidation.o: InputValidation.cpp InputValidation.hpp
	$(CXX) $(CXXFLAGS) -c InputValidation.cpp

Menu.o: Menu.cpp Menu.hpp InputValidation.hpp
	$(CXX) $(CXXFLAGS) -c Menu.cpp

Space.o: Space.cpp Space.hpp
	$(CXX) $(CXXFLAGS) -c Space.cpp

Quest.o: Quest.cpp Quest.hpp Hero.hpp Map.hpp
	$(CXX) $(CXXFLAGS) -c Quest.cpp

Kingdom.o: Kingdom.cpp Kingdom.hpp
	$(CXX) $(CXXFLAGS) -c Kingdom.cpp

Mountains.o: Mountains.cpp Mountains.hpp
	$(CXX) $(CXXFLAGS) -c Mountains.cpp

Forest.o: Forest.cpp Forest.hpp
	$(CXX) $(CXXFLAGS) -c Forest.cpp

Shire.o: Shire.cpp Shire.hpp
	$(CXX) $(CXXFLAGS) -c Shire.cpp

Mordor.o: Mordor.cpp Mordor.hpp
	$(CXX) $(CXXFLAGS) -c Mordor.cpp

Map.o: Map.cpp Map.hpp Space.hpp
	$(CXX) $(CXXFLAGS) -c Map.cpp

Hero.o: Hero.cpp Hero.hpp Item.hpp
	$(CXX) $(CXXFLAGS) -c Hero.cpp

Item.o: Item.cpp Item.hpp
	$(CXX) $(CXXFLAGS) -c Item.cpp


.PHONY : clean
clean :
	-rm *.o lotr

zip:
	zip FinalProject_Syed_Maliha.zip *.cpp *.hpp *.pdf makefile -D


