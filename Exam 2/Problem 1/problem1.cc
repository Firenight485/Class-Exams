// Copyright 2022 CSCE240
// Exam 2 problem1.cc
#include<problem1.h>
#include<iostream>

// implement the Remove function here
void Remove(int an_array[], int array_size, int to_remove) {
    int counter = 0;
    //  loops through the array and checks for the to remove values
    //  if any are found then they are turned to null points
    for (int i = 0; i < array_size; ++i) {
        if (an_array[i] == to_remove) {
            an_array[i] = 0;
    }
    //  tracks how many non zero values there are
        if (an_array[i] != 0) {
            an_array[counter] = an_array[i];
            counter++;
        }
}   
    //  moves any zero values to the end of the array
    for (int i = counter; i < array_size; ++i) {
        an_array[i] = 0;
    }
}
