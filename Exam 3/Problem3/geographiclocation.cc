// Copyright 2022 Brian Bongermino 2022

// implement the member functions for the GeographicLocation class in this file
#include<geographiclocation.h>
#include<iostream>
#include<string>
#include<cmath>
using std::string;
namespace csce240_sites {

    //  default constructor
    GeographicLocation::GeographicLocation(double lat, double log) {
        SetLatitude(lat);
        SetLongitude(log);
    }

    //  deconstructor
    GeographicLocation::~GeographicLocation() {
    }

    // sets latitude if its in range else sets it to zero
    void GeographicLocation::SetLatitude(double lat) {
        if (lat >= -90 && lat <= 90) {
            Latiude_ = lat;
        } else {
            Latiude_ = 0;
        }
    }

    //  sets longitude if its in range else sets it to zero
    void GeographicLocation::SetLongitude(double log) {
        if (log >= -180 && log <= 180) {
            Longitude_ = log;
        } else {
            Longitude_ = 0;
        }
    }

    //  first it checks for the range of longitude and latiude
    //  if its zero then zero is printed with the direction being
    //  north or east respectively. If its greater than zero them
    //  its printed as is with north and est respectively. IF it's
    //  a negative then the absolute value is taken and the number
    //  is printed out as is with south and west respectively.
    void GeographicLocation::Print()  {
        string NS, EW;
        if (Latiude_ > 0) {
            std::cout << Latiude_ << "\u00b0 N, ";
        } else if (Latiude_ < 0) {
            Latiude_ = std::fabs(Latiude_);
            std::cout << Latiude_ << "\u00b0 S, ";
        } else if (Latiude_ == 0) {
            NS = '0';
            std::cout << NS + "\u00B0 N, ";
        }
        if (Longitude_ == 0) {
            EW = '0';
            std::cout << EW + "\u00b0 E";
        } else if (Longitude_ > 0) {
            std::cout << Longitude_ << "\u00b0 E";
        } else if (Longitude_ < 0) {
            Longitude_ = std::fabs(Longitude_);
            std::cout << Longitude_ << "\u00b0 W";
        }
    }
}  // namespace csce240_sites

