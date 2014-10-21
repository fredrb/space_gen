#ifndef GALAXY_H
#define GALAXY_H

#include <vector>
#include "ssystem.h"

typedef std::vector<Ssystem> v_galaxy;

class Galaxy{
  private:
    int ssNum;
    v_galaxy ssystems;
    Galaxy() { };
    v_galaxy generateGalaxy( int num );
  public:
    v_galaxy getGalaxy();
    void printGalaxy();
    Galaxy( int num );
};

#endif
