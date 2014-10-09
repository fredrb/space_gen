#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include "generator.h"

int gen_population( int seed, int luck ) {
    int rand_table[RAND_SIZE];
    int res = 0;
    for(int i = 0; i < RAND_SIZE; i++) {
        std::srand((time(NULL) * time(NULL)) * seed * i);
        rand_table[i] = std::rand() % RAND_RANGE;
        res += rand_table[i];
    }
    return (int)res / RAND_SIZE;
}

