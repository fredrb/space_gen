#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "JsonBox.h"
#include "game_spec.h"
#include "planet.h"
#include "generator.h"
#include "ssystem.h"

/* * * * * * * * * * * * * * * * * * * * * * * *
 * Class Game_spec generates a new random galaxy
 *  with a vector of Solar Systems <ssystem>
 *  each solar system will contain a vector of 
 *  <planets>. Each planet will have it's 
 *  specifications.
 * * * * * * * * * * * * * * * * * * * * * * * */

using std::cout;
using std::endl;
using std::string;


void printPlanet( Planet planet ){
  string size_caption = planet.getSizeCaption(); 
  printf("%s's Size: %s\n%s's population: %d\n", 
         planet.getName().c_str(), size_caption.c_str(), 
         planet.getName().c_str(), planet.getPop());
}

int main() {
    /*
     * SOLAR SYSTEM CREATION
     *  Planet Vector allocation
     * */

    Ssystem first(12);
    first.printPlanets();

    // @todo :
    // Create constant to control the size
    //  int planet.h
    //
    /*
    Planet newPlanet(1000000000);
    printPlanet(newPlanet);
    
    printf("Number of Solar Systems created: %d\n", newGame.getSize());

    JsonBox::Object o;
    o["MyUser"]  = JsonBox::Value("Name");
    o["Value"]   = JsonBox::Value(123);
    o["Another"] = JsonBox::Value("ValueMaster");

    std::cout << o << std::endl;

    JsonBox::Value v(o);

    v.writeToFile("json/first.json", true);
    */
    return 0;
}


