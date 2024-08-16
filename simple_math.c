//
//  simple_math.c
//  C_sandbox
//
//  Created by Yen Ting Kuo on 2024/08/16.
//

#include "simple_math.h"
#include "math.h"
double deg2rad(double deg)
{
    return deg*M_PI/180;
}
double rad2deg(double rad)
{
    return rad*180/M_PI;
}

int add(int a, int b)
{
    printf("Added value=%d\n", a + b);
    return a + b;
}
void multiply(int a, int b)
{
    printf("Multiplied value=%d\n", a * b);
}
