#include <iostream>
using namespace std;

class Animal
{
private:
    int happiness;
    int energy;
    int fullness;
    const int MAX_HAPPINESS = 100;
    const int MAX_ENERGY = 100;
    const int MAX_FULLNESS = 100;
    void limitStat();
public:
    Animal(int, int, int);
    int getHappiness();
    int getEnergy();
    int getFullness();
    void eat(int);
    void play(int);
    void sleep(int);
};

Animal::Animal(int happiness,int energy,int fullness):happiness(happiness),energy(energy),fullness(fullness){
    limitStat();
}

int Animal::getHappiness(){return happiness;}
int Animal::getEnergy(){return energy;}
int Animal::getFullness(){return fullness;}

void Animal::eat(int eat){

    this->fullness  += eat;
    if (fullness > MAX_FULLNESS){
        this->happiness -= 10;
    }
    limitStat();
}
void Animal::play(int play){

    this->energy -= play*10;
    this->fullness -= play*20;
    this->happiness += play*5;
    limitStat();
}

void Animal::sleep(int sleep){
    this->energy += sleep*10;
    this->fullness -= sleep*10;
    limitStat();
}

void Animal::limitStat(){
    if (happiness < 0){
        happiness = 0;
    }else if (happiness > MAX_HAPPINESS){
        happiness = MAX_HAPPINESS;
    }
    if (energy < 0){
        energy = 0;
    }else if(energy > MAX_ENERGY){
        energy = MAX_ENERGY;
    }
    if (fullness < 0){
        fullness = 0;
    }else if(fullness > MAX_FULLNESS){
        fullness = MAX_FULLNESS;
    }
}


int main(){
    Animal pet(50,50,50);





}


