#ifndef SSYSTEM_H
#define SSYSTEM_H

class Ssytem{
  private:
    int planetMax;
    int ssytemSize;
    char* type;
    Ssystem() { }
  public:
    Ssystem( int planetMax );
    int generateSize( int seed );
    int getSize();


}  

#endif

