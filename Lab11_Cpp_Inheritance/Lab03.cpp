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

int Animal::getHappiness(){return happiness;}
int Animal::getEnergy(){return energy;}
int Animal::getFullness(){return fullness;}

void Animal::eat(int food){
    for (int i = 1 ; i <= food ; i++){
        this->fullness  += 1;
        if (fullness > MAX_FULLNESS){
            this->happiness -= 10;
            return limitStat();
        }
    }
}

void Animal::play(int hour){
    for (int i = 1; i <= hour ;i++){
        if (fullness <= 0 || energy <= 0)return limitStat();
        this->energy -= 10;
        this->fullness -= 20;
        this->happiness += 5;
    }
}

void Animal::sleep(int hour){
    for (int i = 1 ; i <= hour ; i++){
        if (energy > MAX_ENERGY) return limitStat();
        this->energy += 10;
        this->fullness -= 10;
    }
    limitStat();
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
    Animal pet(100,100,100);

    pet.play(10);
    cout << "Happy = " << pet.getHappiness()<< " Full = "
         << pet.getFullness() << " Energy = "
         << pet.getEnergy() << endl;
    pet.eat(101);
    cout << "Happy = " << pet.getHappiness()<< " Full = "
         << pet.getFullness() << " Energy = "
         << pet.getEnergy() << endl;




}


