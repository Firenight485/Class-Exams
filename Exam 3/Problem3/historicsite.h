// Copyright 2022 Brian Bongermino
#ifndef _HISTORICSITE_
#define _HISTORICSITE_

#include<geographiclocation.h>
#include<string>
using std::string;

namespace csce240_sites {
class HistoricSite : public GeographicLocation {
// Derive the HistoricSites class from the GeographicLocation class in this
// file. Place it in the namespace csce240_sites
 public:
// The HistoricSites class should have two private data members:
// a string for the description of the site and an int for the year the
// site was established.

// Member functions:
// - An explicit constructor that takes a string for the description, with a
//   default argument of "", an int for the year established with a default
//   argument of 0, a double for the latitude with a default argument of 0,
//   and a double for the longitude with a default argument of 0.
    explicit HistoricSite(string = "", int = 0, double = 0, double = 0);

// - A virtual destructor - the body of the function should be empty {}
    virtual ~HistoricSite();

// - SetDescription that takes a string for the historic site's description.
//   Any string should be accepted.
    void SetDescription(string desc);

// - SetYearEstablished that takes an int argument for the year the historic
//   site was established. Any int should be accepted.
    void SetYearEstablished(int ya);

// - GetDescription should return a copy of the value of the description
//   data member
    string GetDescription() const { return description_; }

// - GetYearEstablished should return a copy of the value of the year
//   established data member
    int GetYearEstablished() const { return year_; }

// - A virtual Print function that displays the Historic Site as
//     Historic Site
//     Established: (the value of the year established data member)
//     Location: (the lat/long as printed in the GeographicLocation class)
//     Description: (the value of the description data member)
//   example expected output for the print function is provided in
//   /output/correcthsprint.txt
    virtual void Print();

 private:
    std::string description_;
    int year_;
};
}  // namespace csce240_sites
#endif  // _HISTORICSITE_H_