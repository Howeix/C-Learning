//
//  shoes1.c
//  Demo
//
//  Created by Jack on 2019/11/17.
//  Copyright © 2019 Jack. All rights reserved.
//

#include "shoes1.h"

void testShoes1(void) {
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's) foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);
}
