// ex is a 
#include <iostream>
#include <cstdio>
#include <sstream>
using namespace std;

class Animal{
private:
      string sound;
      int leg;
public:
      Animal(int leg);
      int getLeg();
      virtual void scream() = 0;
};

Animal::Animal(int leg):leg(leg){}

int Animal::getLeg(){
      return leg;
}

class Dog :public Animal{
public:
      Dog();
      void scream();
};

Dog::Dog():Animal(4){}

void Dog::scream(){
      cout << "woop" << endl;
}

class Cat :public Animal{
public:
      Cat();
      void scream();
};

Cat::Cat():Animal(4){}

void Cat::scream(){
      cout << "meow" << endl;
}

int main(){
      Dog pom,kapao;
      Cat si,qi;
      
      pom.scream();
      kapao.scream();
      
      si.scream();
      qi.scream();
}