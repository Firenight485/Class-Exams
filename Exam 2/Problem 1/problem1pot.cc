// Copyright 2022 CSCE240
// Exam 2 problem1.cc
#include<problem1.h>
#include<iostream>

// implement the Remove function here
void Remove(int an_array[], int array_size, int to_remove) {
    int counter = 0;
    int shift = 0;
    for (int i = 0; i < array_size; ++i) {
        if (an_array[i] == to_remove) {
            an_array[i] = 0;
    }
        if (an_array[i] != 0) {
            an_array[counter] = an_array[i];
            counter++;
        }
}
    for (int i = counter; i < array_size; ++i) {
        an_array[i] = 0;
    }
}
