// Ex composition ( has a )

#include <iostream>
#include <cstdio>
#include <sstream>
using namespace std;

class Gear{
private:
      string name;
      int offense;
      int defense;
public:
      
      Gear(string name,int off ,int def);
      int getOffense();
      int getDefense();
      string getName();
      string toString();
};

Gear::Gear(string name,int off,int def)
      : name(name),offense(off),defense(def){}

int Gear::getOffense(){
      return offense;
}

int Gear::getDefense(){
      return defense;
}

string Gear::getName(){
      return name;
}
string Gear::toString(){
      stringstream ss;
      ss << name << " Offenase: " << offense << " DEfense: " << defense << endl;
      return ss.str();
}

class Player{
private:
      int offense;
      int defense;
      Gear **equipment;
public:
      Player(int off, int def);
      int getOffense();
      int getDefense();
      void addGear(Gear *gear);
      void showGear();

};


Player::Player(int off,int def)
      :offense(off),defense(def){     
      equipment = new Gear*[5];
      for (int i = 0 ; i < 6 ; i++){
            equipment[i] = nullptr;
      }
}

int Player::getOffense(){
      return offense;
}

int Player::getDefense(){
      return defense;
}

void Player::addGear(Gear *gear){
      for(int i = 0 ; i < 6 ;i++){
            if(equipment[i] == nullptr){
                  equipment[i] = gear;
                  this->offense += gear->getOffense();
                  this->defense += gear->getDefense();
                  break;
            }
            if (equipment[i]->getOffense() < gear->getOffense() && equipment[5]){
                  this->offense -= equipment[i]->getOffense();
                  this->defense -= equipment[i]->getDefense();
                  equipment[i] = gear;
                  this->offense += equipment[i]->getOffense();
                  this->defense += equipment[i]->getDefense();
                  break;
            }else if (  equipment[i]->getOffense() == gear->getOffense() &&
                        equipment[i]->getDefense() < gear->getDefense() && equipment[5])
            {
                  this->offense -= equipment[i]->getOffense();
                  this->defense -= equipment[i]->getDefense();
                  equipment[i] = gear;
                  this->offense += equipment[i]->getOffense();
                  this->defense += equipment[i]->getDefense();
                  break;
            }
            
      }

}

void Player::showGear(){
      for (int i = 0 ; i < 6 ; i++){
            if (equipment[i])
            cout << equipment[i]->toString() ;
      }
}


int main(){
      Player *inorin = new Player(100,100);
      
      inorin->addGear(new Gear("hat",25,0));
      inorin->addGear(new Gear("hand",10,30));
      inorin->addGear(new Gear("scarf",15,10));
      inorin->addGear(new Gear("foot",30,20));
      inorin->addGear(new Gear("cloth",20,10));
      inorin->addGear(new Gear("leg",40,30));

      cout << inorin->getOffense() << " " << inorin->getDefense() << endl;

      inorin->addGear(new Gear("A",12,28));

      cout << inorin->getOffense() << " " << inorin->getDefense() << endl;

      inorin->addGear(new Gear("B",12,30));

      cout << inorin->getOffense() << " " << inorin->getDefense() << endl;

}