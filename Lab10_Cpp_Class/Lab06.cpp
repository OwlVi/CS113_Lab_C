#include <iostream>
#include <cmath>
#include <string>

using namespace std;

class Time
{
private:
    int hour;
    int minute;
    int second;
    int duration;
public:
    
    Time(int hou_ ,int min_ ,int sec_){
        this->hour   = hou_;
        this->minute = min_;
        this->second = sec_;
        this->duration = getDuration();
        if (hour >= 24) {
            this->hour = this->hour % 24;
        }
    }

    Time(int dur_){
        this->hour   = 0;
        this->minute = 0;
        this->second = 0;
        this->duration = dur_;
        if (hour >= 24) {
            this->hour = this->hour % 24;
        }
    }

    int getDuration(){
        if (hour != 0 && minute != 0 && second != 0){
            return (hour * 3600) + (minute * 60)+ second;
        } else {
            return duration;
        }
    }

    int getHour(){
        return ((hour != 0) ? hour:duration/3600);
    }

    int getMinute(){
        return ((minute != 0) ? minute:(duration % 3600) / 60);
    }
    
    int getSecond(){
        return ((second != 0) ? second:duration % 60);
    }
    
    Time add(Time other){
        int duration = getDuration() + other.getDuration();
        if (hour != 0 || minute != 0 || second != 0){
            int hours = duration / 3600;
            int minutes = (duration % 3600) / 60;
            int seconds = duration % 60;
            return Time(hours, minutes, seconds);
        }else{
            return Time(duration);
        }
    }

    int subtract(Time other){
        int sec = getDuration() - other.getDuration();
        if (sec < 0) {
            return 86400 + sec;
        }else{
            return sec;
        }
        
    }

    int equals(Time other){
        return ((getDuration() == other.duration) ? 1:0);
    }

    string toString() {
        string h = (getHour()< 10 ) ? "0"+to_string(getHour()):to_string(getHour());
        string m = (getMinute()< 10 ) ? "0"+to_string(getMinute()):to_string(getMinute());
        string s = (getSecond()< 10 ) ? "0"+to_string(getSecond()):to_string(getSecond());
    return h + ":" + m + ":" + s;
    }
};



int main() {

    Time a(7322),b(1,1,1);

    cout << a.getDuration() << endl;
    cout << b.getDuration() << endl << endl;

    cout << a.subtract(b) << endl;
    cout << b.subtract(a) << endl << endl;
    
    cout << a.getDuration() << endl;
    cout << b.getDuration() << endl;
    //Time()
    cout << a.toString() << " " << b.toString() ;


}