#include <iostream>
#include <cstdio>
using namespace std;

int main(){
    string name;
    char output[100];
    double salary,number,bonus = 0;
    cin >> name;
    cin >> number;
    for (int i = 0 ; i < 12; i++){
        cin >> salary;
        bonus += number + (salary*0.15);
    }
    
    sprintf(output,"%.2f",bonus);
    cout << name << " " 
         << output
    
    << endl;
}