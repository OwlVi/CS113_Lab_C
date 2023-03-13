#ifndef MEDIAPLAY.H
#define MEDIAPLAY.H

#include <iostream>
#include <Media.h>
#include <Image.h>
#include <Video.h>

using namespace std;

class Mediaplayer{
    private:        
    public:
        Mediaplayer();
        int list = 0;
        void addMedia(Media*);
        void play();
        void next();
        void stop();
        void showlist();

};

#endif