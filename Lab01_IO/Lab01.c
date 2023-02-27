#include<stdio.h>

int main() 
{
    int computer_time = 1480;  // ในโปรแกรมตรวจอาจเปลี่ยนค่าของตัวแปรนี้ แต่นิสิตไม่ต้องเปลี่ยนค่าของตัวแปรนี้
    int day,hour,min;

    day  = computer_time / 1440;
    hour = (computer_time / 60 ) - ( day * 24 );
    min  = computer_time % 60;
    
    printf("It is %d days %d hours and %d minutes.",day,hour,min);

    return 0;
}