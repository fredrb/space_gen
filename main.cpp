#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "JsonBox.h"
#include "game_spec.h"
#include "generator.h"

int main() {
    std::cout << "Hello!" << std::endl;

    Game_spec newGame(30);
    newGame.generateSize(2);

    printf("Number of Solar Systems created: %d\n", newGame.getSize());
    
    JsonBox::Object o;
    o["MyUser"]  = JsonBox::Value("Name");
    o["Value"]   = JsonBox::Value(123);
    o["Another"] = JsonBox::Value("ValueMaster");

    std::cout << o << std::endl;

    JsonBox::Value v(o);

    v.writeToFile("json/first.json", true);

    printf("JSON Parser\n");
    printf("Medium %d\n", gen_population(1, 0));
    return 0;
}


