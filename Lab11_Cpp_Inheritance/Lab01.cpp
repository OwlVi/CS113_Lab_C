#include <iostream>
#include <string>
using namespace std;

class MusicPlaylist{
private:
    string track[20];
public:
    int i = 0;
    int j = 0;
    MusicPlaylist(){}

    void add(string Music){
        if (track[i] == "\0"){
            track[i] = Music;
            i++;
        }else{
            track[i] = Music;
            i++;
        }
    }

    void setCurrentTrack(int number){
        j = number-1;
    }

    string play(){
        return track[j];
    }
};

int main()
{
    MusicPlaylist mp;
    mp.add("Shape of You");
    mp.add("That's What I Like");
    mp.add("Humble");
    mp.setCurrentTrack(1);
    cout << mp.play() << endl; // แสดงเพลงลำดับที่ 1 คือ Shape of You
}
