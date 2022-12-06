// Copyright 2022 Brian Bongermino
#ifndef _PROBLEM1_H_
#define _PROBLEM1_H_

#include<iostream>

    //  finds a value and loops through the array to find the value that needs
    //  to be replaced once found the value is replaced
    template<class T>
    int FindAndReplace(T values[], const int kSize, T tofind, T replace) {
        for (int i = 0; i < kSize; ++i) {
            if (values[i] == tofind) {
                values[i] = replace;
            }
        }
    }

#endif  //  _PROBLEM1_H_