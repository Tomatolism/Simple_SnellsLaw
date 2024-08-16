//
//  snells_law.c
//  C_sandbox
//
//  Created by Yen Ting Kuo on 2024/08/16.
//

#include "snells_law.h"
#include "snells_law_cal.h"
void refraction_angle(double medium1, double medium2, double incident_angle){
    double result;
    result = snells_law_calculate(medium1, medium2, incident_angle);
    
    printf("Value of refraction angle=%f\n", result);
}
