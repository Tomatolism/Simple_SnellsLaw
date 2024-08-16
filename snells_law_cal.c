//
//  snells_law_cal.c
//  C_sandbox
//
//  Created by Yen Ting Kuo on 2024/08/16.
//

#include "snells_law_cal.h"
#include "simple_math.h"
#include <math.h>

double snells_law_calculate(double medium1, double medium2, double incident_angle)
{
    double incident_angle_rad = deg2rad(incident_angle);
    double refract_angle, refract_angle_rad;
    
    refract_angle_rad = asin( medium1/medium2 * sin(incident_angle_rad));
    refract_angle = rad2deg(refract_angle_rad);
    
    return refract_angle;
}
