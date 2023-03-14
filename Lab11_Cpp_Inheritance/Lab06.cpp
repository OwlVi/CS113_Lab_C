#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Animal
{
protected:
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

class Bird:public Animal
{
public:
    Bird(int, int, int);
    void fly(int);
    void sing();
};

class Pet
{
private:
    string name;
public:
    Pet(string);
    string getName();
    void setName(string);
};

class OwnedBird:public Bird,public Pet
{
public:
    OwnedBird(string, int, int, int);
};

Animal::Animal(int happiness,int energy,int fullness):happiness(happiness),energy(energy),fullness(fullness){limitStat();}

int Animal::getHappiness(){return happiness;}
int Animal::getEnergy(){return energy;}
int Animal::getFullness(){return fullness;}

void Animal::eat(int food){
    for (int i = 1 ; i <= food ; i++){
    
        if (fullness > MAX_FULLNESS){
            this->happiness -= 10;
            return limitStat();
        }
        this->fullness  += 1;
    }
    limitStat();
}

void Animal::play(int hour){
    for (int i = hour ; i > 0;i--){
        if (fullness == 0 || energy == 0){return;}
        this->energy -= hour*10;
        this->fullness -= hour*20;
        this->happiness += hour*5;
        limitStat();
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

Bird::Bird(int happiness,int energy,int fullness):Animal(happiness,energy,fullness){limitStat();}

void Bird::fly(int hour){
    for (int i = 1 ; i <= hour ; i++){
        this->energy  -= 5;
    }
    limitStat();
}

void Bird::sing(){
    this->happiness += 5;
    limitStat();
}

Pet::Pet(string name ):name(name){}

string Pet::getName(){return name;}

void Pet::setName(string name){
    this->name = name;
}

OwnedBird::OwnedBird(string name ,int happiness,int energy,int fullness):Bird(happiness,energy,fullness),Pet(name){limitStat();}

int main()
{
    char action;
    int hour;
    int happiness, energy, fullness;
    cin >> happiness >> energy >> fullness;
    OwnedBird animal("Dobby", happiness, energy, fullness);
    while (1) {
        cin >> action;
        if (action == 'q') break;
        cin >> hour;
        switch (action) {
            case 'e':
                animal.eat(hour);
                break;
            case 'p':
                animal.play(hour);
                break;
            case 's':
                animal.sleep(hour);
                break;
            case 'f':
                animal.fly(hour);
                break;
            case 'i':
                for (int i = 0; i < hour; i++)
                    animal.sing();
                break;
            case 'n':
                if (hour < 5)
                    animal.setName("Debby");
                else
                    animal.setName("Shogun");
                break;
        }
    }
}



