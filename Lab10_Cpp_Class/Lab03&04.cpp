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
    double radius;
    point center,pt;

    cout << "Center of Circle: " ;
    cin >> center.xPosition >> center.yPosition;
    cout << "Radius of Circle: " ;
    cin >> radius; 
    cout << "Point to Check: " ;
    cin >> pt.xPosition >> pt.yPosition;

    Circle pointCenter(center,radius);


    cout << "Area of Circle is " << pointCenter.area()
        <<endl;
    cout << "Distance from Center to Point ("
        << pt.xPosition << ", " << pt.yPosition 
        <<") is " << pointCenter.distanceFromCenter(pt)
        << endl;
    if (pointCenter.contains(pt)){
        cout << "This circle contains this point.";
    }else{
        cout << "This point is not in this circle.";
    }
}