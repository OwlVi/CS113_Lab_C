#include <iostream>
using namespace std;

int main(){

    int n,temp = 0,max = 0;
    cin >> n;
    // find max 
    int number = 0,list_num[n];
    for (int i = 0 ; i < n;i++){
        cin >> number;
        list_num[i] = number;
        if (number > temp){
            max = number;
            temp = number;
        } 
    }
    // sort num and fill 
    int sort[max] = {0};
    for (int i = 0; i < n;i++){
        sort[list_num[i]-1] = list_num[i];
    }
    for (int i= 0; i < max ; i++){
        if (sort[i] == 0 && i%2 == 0){
            cout << i+1 << " ";
        }
    
    }
    cout << endl;
    for (int i= 0; i < max ; i++){
        if (sort[i] == 0 && i%2 != 0){
            cout << i+1 << " ";
        }
    }

}