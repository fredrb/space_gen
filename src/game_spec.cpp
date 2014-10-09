#include "game_spec.h"
#include "JsonBox.h"
#include <iostream>
#include <cstdlib>

Game_spec::Game_spec( int ss_max ){
  this->ss_max = ss_max;
}

int Game_spec::generateSize( int seed ){
   std::srand( time(NULL) * seed );
   this->galaxySize = std::rand() % this->ss_max;
   return galaxySize;
}

int Game_spec::getSize(){
  return this->galaxySize;
}

void generateJson( char *path[] ){
   
}


