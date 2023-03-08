#ifndef MEDIA_H // include guard
#define MEDIA_H

#include <iostream>
using namespace std;

class Media {
  private: 
    string title;
    int sizeInBytes;

  public:
    Media(string, int);
    string getTitle();
    int getSizeInBytes();
    double getSizeInKB();
    double getSizeInMB();
    double getSizeInGB();
    string info();
};

#endif