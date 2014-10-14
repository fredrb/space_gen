#ifndef PLANET_H
#define PLANET_H

class Planet{
  private:
    std::string name;
    char* type;
    int planetSize;
    unsigned long planetPop;
    Planet() { }
  public:
    Planet( unsigned long popMax, int seed );
    int generateSize();
    unsigned long generatePop( unsigned long popMax, int seed );
    char* generateType();
    std::string generateName( int seed ); 
    int getSize();
    unsigned long getPop();
    char*  getType();
    std::string getName();
    std::string getSizeCaption();
};

#endif
