// Copyright 2022 CSCE240
// Exam 2 problem 2 implement the Volume class
#include<volume.h>
#include<iostream>

// default constructor
Volume::Volume(double quanity, string uom) {
    SetQuantity(quanity);
    SetMeasure(uom);
}

double Volume::GetQuantity() const {
    return quantity_;
}

string Volume::GetMeasure() const {
    return measure_;
}

// checks if the quanity is in range
void Volume::SetQuantity(double quantity) {
    if (quantity > -1)
        quantity_ = quantity;
}

//  sets the type of measurments
void Volume::SetMeasure(string measure) {
    if ( measure == "ounces" || measure == "tablespoons"
    || measure== "teaspoons" || measure == "cups")
        measure_ = measure;
}

// conversions for each measurement being converted into their
// respective counterpart
void Volume::Convert(string converted_measure) {
    if (measure_ == "ounces") {
        if (converted_measure == "tablespoons") {
            quantity_ = (quantity_ * 2);
            measure_ = converted_measure;
        } else if (converted_measure == "cup") {
            quantity_ = (quantity_ / 8);
            measure_ = converted_measure;
        } else if (converted_measure == "teaspoons") {
            quantity_ = (quantity_ * 6);
            measure_ = converted_measure;
        }
    } else if (measure_ == "tablespoons") {
        if (converted_measure == "ounces") {
            quantity_ = (quantity_ / 2);
            measure_ = converted_measure;
        } else if (converted_measure == "cups") {
            quantity_ = (quantity_ / 16);
            measure_ = converted_measure;
        } else if (converted_measure == "teaspoons") {
            quantity_ = (quantity_ * 3);
            measure_ = converted_measure;
        }
    } else if (measure_ == "cups") {
        if (converted_measure == "ounces") {
            quantity_ = (quantity_ * 8);
            measure_ = converted_measure;
        } else if (converted_measure == "tablespoons") {
            quantity_ = (quantity_ * 16);
            measure_ = converted_measure;
        } else if (converted_measure == "teaspoons") {
            quantity_ = (quantity_ * 48);
            measure_ = converted_measure;
        }
    } else if (measure_ == "teaspoons") {
        if (converted_measure == "cups") {
            quantity_ = (quantity_ / 48);
            measure_ = converted_measure;
        } else if (converted_measure == "tablespoons") {
            quantity_ = (quantity_ / 3);
            measure_ = converted_measure;
        } else if (converted_measure == "ounces") {
            quantity_ = (quantity_ / 6);
            measure_ = converted_measure;
        }
    }
}

// checks if the measurements are equal, if they are not then the measure
// is converted the quanities are converted as well and added
// together and outputted
void Volume::Add(Volume v2) {
    if (v2.measure_ != measure_) {
        v2.Convert(measure_);
            double final = quantity_ + v2.quantity_;
            SetMeasure(measure_);
            SetQuantity(final);
    }
}
