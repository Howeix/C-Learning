//
//  shoes2.c
//  Demo
//
//  Created by Jack on 2019/11/17.
//  Copyright © 2019 Jack. All rights reserved.
//

#include "shoes2.h"

void testShoes2(void) {
    double shoe, foot;
    
    printf("Shoe size (mens)     foot length\n");
    shoe = 3.0;
    while (shoe < 18.5) {
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f  %15.2f  inches\n", shoe,foot);
        shoe = shoe + 1.0;
    }
    printf("If the shoe fits, wear it.\n");
    
}
