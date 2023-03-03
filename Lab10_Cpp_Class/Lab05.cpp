#include <iostream>
#include <cstdlib>
#include <sstream>
#include <cmath>
#include <string>
#include <iomanip>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
    int duration;
public:
    /* construct */
    Time(int hou_ ,int min_ ,int sec_){
        this->hour   = hou_;
        this->minute = min_;
        this->second = sec_;
    }

    Time(int dur_){
        this->duration = dur_;
    }

    /* getter */

    int getDuration(){
        return duration;
    }

    Time add(Time other){
        return ;
    }






};


