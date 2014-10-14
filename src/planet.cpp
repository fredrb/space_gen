#include <iostream>
#include <cstdlib>
#include <fstream>
#include <time.h>
#include "planet.h"

const char* FILE_NAME = "data/planets/planet_names";

Planet::Planet( unsigned long popMax , int seed ){
  this->planetPop  = generatePop(popMax, seed);
  this->planetSize = generateSize();
  this->name       = generateName(seed);
}

std::string Planet::generateName( int seed ){
  std::srand(time(NULL) * (seed + 1) );
  int num     = (std::rand() % 200) + 1;
  int counter = 0;
  std::ifstream rfile(FILE_NAME);
  std::string line;
  while(getline(rfile, line) && counter < num ){
    counter++;
  }
  return line;
}

std::string Planet::getName(){
  return this->name;
}

int Planet::getSize(){
  return this->planetSize;
}

unsigned long Planet::getPop(){
  return this->planetPop;
}

unsigned long Planet::generatePop( unsigned long popMax , int seed ){
  std::srand(time(NULL) * seed ); 
  int population = std::rand() % popMax;
  if(population > popMax)
    population = popMax;
  return population;
}

/* PLANET SIZES: * 
 * 1 - Colony [ 0 - 100k ]
 * 2 - Small  [ 100k - 1M ]
 * 3 - Medium [ 1M - 100M ] 
 * 4 - Big    [ 100M - 500M ]
 * 5 - Large  [ 500M - 1B ] 
 * 6 - Huge   [ 1B - 500B ]
 * 7 - Titan  [ 1T + ]
 * */

int Planet::generateSize(){
  const unsigned long colony = 100000;
  const unsigned long small  = 1000000;
  const unsigned long medium = 100000000;
  const unsigned long big    = 500000000;
  const unsigned long large  = 1000000000;
  const unsigned long huge   = 500000000000;
  const unsigned long titan  = 1000000000000;
  const int ppop = this->planetPop;
  if(ppop < colony)
    return 1;
  if(ppop < small)
    return 2;
  if(ppop < medium)
    return 3;
  if(ppop < big)
    return 4;
  if(ppop < large)
    return 5;
  if(ppop < huge)
    return 6;
  if(ppop < titan)
    return 7;
}

std::string Planet::getSizeCaption(){
  std::string size_caption;
  switch(this->planetSize){
    case(1):
      size_caption = "Colony";
      break;
    case(2):
      size_caption = "Small";
      break;
    case(3):
      size_caption = "Medium";
      break;
    case(4):
      size_caption = "Big";
      break;
    case(5):
      size_caption = "Large";
      break;
    case(6):
      size_caption = "Huge";
      break;
    case(7):
      size_caption = "Titan";
      break;
  }
  return size_caption;
}



