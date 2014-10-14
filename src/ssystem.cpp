#include <iostream>
#include <ctime>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <fstream>
#include "ssystem.h"



const char* SS_NAMES = "data/solar_systems/names";
typedef std::vector<Planet> v_planet;

const unsigned long COLONY = 100000;
const unsigned long SMALL  = 1000000;
const unsigned long MEDIUM = 100000000;
const unsigned long BIG    = 500000000;
const unsigned long LARGE  = 1000000000;
const unsigned long HUGE   = 500000000000;
const unsigned long TITAN  = 1000000000000;


Ssystem::Ssystem( int planetMax ){
   this->planetMax   = planetMax; 
   this->ssystemSize = generateSize();
   this->name        = generateName();   
   this->planets     = generatePlanets();
}

std::string Ssystem::getName(){ return this->name; }
int Ssystem::getSize(){ return this->ssystemSize; }
v_planet Ssystem::getPlanetVector(){ return this->planets; }

int Ssystem::generateSize(){
  std::srand(time(NULL) * 10);
  int num = (std::rand() % planetMax) + 1;
  return num;
}


std::string Ssystem::generateName(){
  std::srand(time(NULL) * 12);
  int num     = (std::rand() % 34) + 1;
  int counter = 0;
  std::ifstream rfile(SS_NAMES);
  std::string line;
  while(getline(rfile, line) && counter < num ){
    counter++;
  }
  return line;
}

v_planet Ssystem::generatePlanets(){
  v_planet pivotPlanets;
  for(int i = 0; i < this->ssystemSize; i++){
    pivotPlanets.push_back(Planet(TITAN, i));
  }
  return pivotPlanets;
}

void Ssystem::printPlanets(){
  printf("Solar System Name: %s \nPlanet Total: %d\n", this->name.c_str(), this->ssystemSize);
  for(int i = 0; i < this->ssystemSize; i++){
    printf("\nName: %s\nPopulation: %d\nSize: %s\n",
            this->planets[i].getName().c_str(),
            this->planets[i].getPop(),
            this->planets[i].getSizeCaption().c_str());
  }
}


