// Copyright 2022 CSCE240
// Exam 2 - problem 3 - function prototypes
#include<bookproblem3.h>
#include<problem3.h>
#include<iostream>
#include<string>

int WhichChapter(const Book * bptr, string ch) {
    //  sets both the number of chapters and the chapters
    //  to modifiable values
    int numofchap = bptr->GetNumChapters();
    const string * test = bptr->GetChapters();
    int loc = 0;
    int counter = -1;
    // checks if the number of chapters are valid
    if (numofchap > -1) {
        for (int i = 0; i < numofchap; ++i) {
            //  checks if the chapter in range is actually
            //  there
            if (test[i] == ch) {
                loc = i;
                int temptest = loc + 1;
                counter = temptest;
            }
            }
        //  if the chapter isn't there, then the program outputs
        //  to -1
        } else {
            return -1;
        }
        //  counter as a way to check if the value has actually been found
        //  and where it has been found
    if (counter >= 0) {
        return counter;
     } else if (counter <= 0) {
        return -1;
    }
    return 0;
}


void RemoveChapter(Book * bptr, string ch) {
    const string * temp = bptr->GetChapters();
    int Knewsize1 = bptr->GetNumChapters();
    std::string newchap[Knewsize1];

    int temp2 = 0;
    int counter = 0;
    //  makes a copy of the the get chapters and
    //  copies over every value that isn't the
    //  value that needs to be removed
    //  a counter that checks how many times it was found
    for (int i = 0; i < Knewsize1; ++i) {
        if (bptr->GetChapters()[i] != ch) {
            newchap[temp2++] = bptr->GetChapters()[i];
        } else if (bptr->GetChapters()[i] == ch) {
            counter++;
        }
    }
    //  sets the chapater to the copy array with the new values
    //  and the final count int
    int finalcount = Knewsize1 - counter;
    bptr->SetChapters(newchap, finalcount);
}
