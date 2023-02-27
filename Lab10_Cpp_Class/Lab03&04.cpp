#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

typedef struct _point {
    double xPosition;
    double yPosition;
} point;

// Lab03
class Circle
{
private:
    point center;
    double radius;
public:
    Circle(point cen, double rad){
        this->center = cen;
        this->radius = rad;
    };

    double area(){
        return M_PI * radius * radius;
    }

    double distanceFromCenter(point pt){
        return sqrt(pow((pt.xPosition - center.xPosition),2) + pow((pt.yPosition - center.yPosition),2));
    }

    bool contains (point pt){
        return distanceFromCenter(pt) <= radius;
    }

};

// Lab04
int main()
{
    double pt;
    point center;

    



}