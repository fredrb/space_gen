#ifndef GAME_SPEC_H
#define GAME_SPEC_H

class Game_spec{
  private:
    int ss_max;
    int galaxySize;
    Game_spec() { }
  public:
    Game_spec( int ss_max ); 
    int generateSize( int seed );
    int getSize();
};

#endif 
