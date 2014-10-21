#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
#include "galaxy.h"

Galaxy::Galaxy(int num){
  ssNum    = num;
  ssystems = generateGalaxy(num);
}

v_galaxy Galaxy::generateGalaxy(int num){
  v_galaxy galaxy; 
  for(int i = 0; i < num; i++){
    std::srand(i * time(NULL));
    galaxy.push_back(Ssystem(std::rand() % 14, (i+1)));
  }
  return galaxy;
}

v_galaxy Galaxy::getGalaxy(){
  return this->ssystems;
}

void Galaxy::printGalaxy(){
  std::cout << "Galaxy" << std::endl;
  for(int i = 0; i < this->ssNum; i++){
    std::srand(time(NULL) * i);
    this->ssystems[i].printPlanets();
    std::cout << std::endl;
  }
}
