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
    
    Time(int hou_ ,int min_ ,int sec_){
        this->hour   = hou_;
        this->minute = min_;
        this->second = sec_;
        this->duration = getDuration();
    }

    Time(int dur_){
        this->hour   = dur_/ 3600;
        this->minute = (dur_ % 3600) / 60;
        this->second = dur_ % 60;
        this->duration = dur_;
    }

    int getDuration(){
        int totalTime = (hour * 3600) + (minute * 60)+ second;
        return ((totalTime >= 86400) ? totalTime-86400  : totalTime);
    }

    int getHour(){
        return hour;
    }

    int getMinute(){
        return minute;
    }
    
    int getSecond(){
        return second;
    }
    
    Time add(Time other){
        int duration = getDuration() + other.getDuration();
        return Time(duration);
    }

    int subtract(Time other){
        int duration = getDuration() - other.getDuration();
        if (duration < 0) {
            return 86400 + duration;
        }else{
            return duration;
        }
    }

    int equals(Time other){
        return ((getDuration() == other.duration) ? 1:0);
    }

    string toString() {
        stringstream ss;
        ss  << setfill('0') << setw(2) << hour << ":"
            << setfill('0') << setw(2) << minute << ":"
            << setfill('0') << setw(2) << second;  
    
        return ss.str();
    }
};

int main() {

    Time a(7322),b(1,1,1);

    cout << a.getDuration() << endl;
    cout << b.getDuration() << endl << endl;
    
    cout << " a + b " << Time(a.add(b)).getDuration() << endl;
    cout << " b + a " << Time(b.add(a)).getDuration() << endl << endl;

    cout << " a - b " << a.subtract(b) << endl;
    cout << " b - a " << b.subtract(a) << endl << endl;
    
    cout << a.getDuration() << endl;
    cout << b.getDuration() << endl << endl;

    cout << a.toString() << " " << b.toString() ;

}