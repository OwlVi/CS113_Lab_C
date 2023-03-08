#include <iostream>
#include <cstdlib> // เติม c ข้างหน้า กรณีที่จะใช้ library จาก c แล้วตัด .h ออก

using namespace std; // ใช้ลดรูป std 

int main(){
    int number ;
    float price;
    char text[100];
    // cin = console input | stream extraction operator '>>' 
    cin >> number 
             >> price 
             >> text;


    // cout = console output | stream insertion operator '<<'
    cout << "Hello C++";   
    cout << endl;     //  end line 
    cout << number ;
    cout << endl;

    cout << text << " " << price << " " << number << endl;

    //data type
    bool is_open = 1 ; // >> True or False
    
    if (is_open){
        cout << "O" << endl;
    }

    string name = "Peter ";

    if (name == "Peter "){
        cout << "YES"<< endl;
    }
    name += "Paker";
    cout << name << endl;

    // for loop 

    int list_number[10] = {1,2,3,4,5,6,7,8,9,0};

    for (int i = 0 ; i < 10; i++){
        cout << list_number[i] << endl;
    }

    return 0;
}