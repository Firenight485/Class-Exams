// Copyright 2022 CSCE240
// Exam 2 - problem 3 - function prototypes
#include<bookproblem3.h>
#include<problem3.h>
#include<iostream>
#include<string>

int WhichChapter(const Book * bptr, string ch) {
    int numofchap = bptr->GetNumChapters();
    const string * test = bptr->GetChapters();
    int loc = 0;
    int counter = -1;
    if (numofchap >= -1) {
        for (int i = 0; i < numofchap; ++i) {
            if (test[i] == ch) {
                loc = i;
                int temptest = loc + 1;
                counter = temptest;
            }
            }
        } else {
            return -1;
        }
    if (counter >= 0) {
        return counter;
     } else if (counter <= 0) {
        return -1;
    }
}


void RemoveChapter(Book * bptr, string ch) {
    const string * temp = bptr->GetChapters();
    int Knewsize1 = bptr->GetNumChapters();
    std::string newchap[Knewsize1];

    int temp2 = 0;
    int counter = 0;

    for (int i = 0; i < Knewsize1; ++i) {
        if (bptr->GetChapters()[i] != ch) {
            newchap[temp2++] = bptr->GetChapters()[i];
        } else if (bptr->GetChapters()[i] == ch) {
            counter++;
        }
    }
    int finalcount = Knewsize1 - counter;
    bptr->SetChapters(newchap, finalcount);
}
