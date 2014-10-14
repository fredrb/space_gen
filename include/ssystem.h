#ifndef SSYSTEM_H
#define SSYSTEM_H

#include <vector>
#include "planet.h"

class Ssystem{
  private:
    int planetMax;
    int ssystemSize;
    char* type;
    std::string name;
    std::vector<Planet> planets;
    std::vector<Planet> generatePlanets();
    int generateSize();
    std::string generateName();
    Ssystem() { }
  public:
    Ssystem( int planetMax );
    int getSize();
    std::string getName();
    std::vector<Planet> getPlanetVector();
    void printPlanets();
};  

#endif

