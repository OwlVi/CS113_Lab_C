#include <iostream>
#include <string>
using namespace std;
// Lab01
class Hero
{
private:
    string name ;
    int level ;
public:
    
    Hero(string strName, int nLevel){
        this->name = strName;
        this->level = nLevel;
    }

    string getName(){
        return name;
    }

    int getLevel(){
        return level;
    }
};
// Lab02
int main()
{
   string name;
   int level;

   cin >> name ;
   cin >> level;
   Hero mage(name,level);
   cout << mage.getName() << " " << mage.getLevel() << endl;

}