#include <iostream>
#include <cstdio>
#include <sstream>
using namespace std;


class Shape
{
public:
      virtual double Area() = 0;
};

class Circle: public Shape{
private:
      double radius;
public:
      Circle(double rad);
      double Area();
};
Circle::Circle(double rad):radius(rad){}
double Circle::Area(){
      return radius*3.14*radius;
}

class Square: public Shape{
private:
      double side;
public:
      Square(double side);
      double Area();
};

Square::Square(double side):side(side){}
double Square::Area(){
      return side*side;
}

class Triangle : public Shape{
private:
      double height;
      double weight;
public:
      Triangle(double height , double weight);
      double Area();
};

Triangle::Triangle(double height , double weight):height(height),weight(weight){}
double Triangle::Area(){
      return (1/2)*height*weight;
}

int main(){
      Shape **shapes = new Shape*[3];
      shapes[0] = new Circle(3.3);
      shapes[1] = new Square(5);
	shapes[2] = new Triangle(5,6);
      
      for (int i = 0 ;i < 3;i++){
            cout << shapes[i]->Area() << endl;
      }
}