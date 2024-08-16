//
//  main.c
//  C_sandbox
//
//  Created by Yen Ting Kuo on 2022/10/12.
//

#include <stdio.h>
#include "snells_law.h"
int main(void) {
    // insert code here...
    double medium_in = 1.;
    double medium_out = 1.2;
    double incident_angle = 30;
    
    refraction_angle(medium_in, medium_out, incident_angle);
    
    return 0;
}
