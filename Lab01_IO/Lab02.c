#include <stdio.h>
#include <stdlib.h>

// กำหนดค่าคงที่ PI มีค่า 22.0/7
#define PI 22.0/7

int main()
{
    float radius = 1.5;
    float volume;
    
    volume = 4*PI*radius*radius*radius;

    printf("The volume of this sphere is %.2f",volume/3);
    return 0;
}