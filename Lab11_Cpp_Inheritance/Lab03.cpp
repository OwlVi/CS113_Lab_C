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

Animal::Animal(int happiness,int energy,int fullness):happiness(happiness),energy(energy),fullness(fullness){limitStat();}

int Animal::getHappiness(){limitStat(); return happiness;}
int Animal::getEnergy(){limitStat(); return energy;}
int Animal::getFullness(){limitStat(); return fullness;}

void Animal::eat(int food){
    for (int i = 1 ; i <= food ; i++){
        if (fullness > MAX_FULLNESS){
            this->happiness -= 10;
            return limitStat();
        }
        this->fullness  += 1;
    }
}

void Animal::play(int hour){
    for (int i = hour ; i > 0;i--){
        limitStat();
        if (fullness == 0 || energy == 0){return;}
        this->energy -= hour*10;
        this->fullness -= hour*20;
        this->happiness += hour*5;
    }
}

void Animal::sleep(int hour){
    for (int i = 1 ; i <= hour ; i++){
        if (energy > MAX_ENERGY) return limitStat();
        this->energy += 10;
        this->fullness -= 10;
    }

}

void Animal::limitStat(){
    if (happiness < 0){happiness = 0;}
    else if (happiness > MAX_HAPPINESS){happiness = MAX_HAPPINESS;}
    if (energy < 0){energy = 0;}
    else if(energy > MAX_ENERGY){energy = MAX_ENERGY;}
    if (fullness < 0){fullness = 0;}
    else if(fullness >= MAX_FULLNESS){fullness = MAX_FULLNESS;}
}

int main(){
    Animal pet(0,150,-100);
    cout << "Happy = " << pet.getHappiness()<< " Energy = "
         << pet.getEnergy()<< " Full = "
         << pet.getFullness()  << endl;
    pet.play(10);
    cout << "Happy = " << pet.getHappiness()<< " Energy = "
         << pet.getEnergy()<< " Full = "
         << pet.getFullness()  << endl;
    pet.eat(101);
    cout << "Happy = " << pet.getHappiness()<< " Energy = "
         << pet.getEnergy()<< " Full = "
         << pet.getFullness()  << endl;




}


