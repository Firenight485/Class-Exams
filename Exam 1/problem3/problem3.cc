//  Copyright 2022 Brian Bongermino

#include<problem3.h>

int Reverse(int rev) {
    int flip1;
    int flip2 = 0;
    while (rev != 0) {
        flip1 = rev % 10;
        rev = rev / 10;
        flip2 = flip2 *10 + flip1;
    }
}

int Reverse(int rev2, int drev) {
     int output = 0;
     int output2 = 1;
     int i = drev;
    if (drev < 1) {
        return rev2;
    } else {
        while (drev > 0 || i != 0) {
            output = rev2 % 10;
            rev2 = rev2 / 10;
            output2 = output2 *10;
            --i;
        }
    }
}
