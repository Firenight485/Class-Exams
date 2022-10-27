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
    if (numofchap >= 1) {
        for (int i = 0; i < numofchap; ++i) {
            if (test[i] == ch) {
                loc = i + 1;
            } else if (test[1] != ch) {
                return - 1;
            }
        }
    } else {
        return -1;
    }
    return loc;
}

void RemoveChapter(Book * bptr, string ch) {
    const string * temp = bptr->GetChapters();
    int newsize1 = bptr->GetNumChapters();
    std::string newchap[newsize1];

    int temp2 = 0;
    int counter = 0;

    for (int i = 0; i < newsize1; ++i) {
        if (bptr->GetChapters()[i] != ch) {
            newchap[temp2++] = bptr->GetChapters()[i];
        } else if (bptr->GetChapters()[i] == ch) {
            counter++;
        }
    }
    int finalcount = newsize1 - counter;
    bptr->SetChapters(newchap, finalcount);
}
