// Ex 
#include <iostream>
using namespace std;
 
// ประกาศ Union
union GFG {
    int Geek1;
    char Geek2;
    float Geek3;
};
 
int main()
{
    union GFG G1;
 
    G1.Geek1 = 34.34;
    cout << G1.Geek1 << endl;
 
    G1.Geek2 = 34.34;
    cout << G1.Geek2 << endl;
 
    G1.Geek3 = 34.34;
    cout << G1.Geek3 << endl;
 
}