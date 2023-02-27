#include <iostream>
using namespace std;

int main(){
    int number ,count = 0;

    cin >> number;
    while (number != 0){
        if (number%2 == 0){
            number /= 2;
        }else{
            number -= 1;
        }
        count++;
    }
    cout << count ;
}