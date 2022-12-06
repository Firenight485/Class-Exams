// Copyright 2022 Brian Bongermino

// implement the member functions for the HistoricSite class in this file

#include<historicsite.h>
#include<iostream>
using std::cout;
using std::endl;

namespace csce240_sites {

    //  default constructor
    HistoricSite::HistoricSite(string desc, int year,
    double lat, double log) {
        SetDescription(desc);
        SetYearEstablished(year);
        SetLatitude(lat);
        SetLongitude(log);
    }

    //  deconstructor
    HistoricSite::~HistoricSite() {
    }

    //  sets the description as is
    void HistoricSite::SetDescription(string desc) {
        description_ = desc;
    }

    //  sets the year eastablished as is
    void HistoricSite::SetYearEstablished(int ya) {
        year_ = ya;
    }

    //  goes through and prints line by line. In order
    //  it prints the heading, the year it was established
    //  the location and where that location is, and the description
    void HistoricSite::Print() {
        cout << "Historic Site" << endl;
        cout << "Established: " << year_ << endl;
        cout << "Location: ";
        GeographicLocation::Print();
        cout << endl;
        cout << "Description: " << description_;
    }
}  // namespace csce240_sites
