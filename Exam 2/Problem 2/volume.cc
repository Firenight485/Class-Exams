// Copyright 2022 CSCE240
// Exam 2 problem 2 implement the Volume class
#include<volume.h>
#include<iostream>

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

void Volume::SetQuantity(double quantity) {
    if (quantity > -1)
        quantity_ = quantity;
}

void Volume::SetMeasure(string measure) {
    if ( measure == "ounces" || measure == "tablespoons"
    || measure== "teaspoons" || measure == "cups")
        measure_ = measure;
}

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


void Volume::Add(Volume v2) {
    if (v2.measure_ != measure_) {
        v2.Convert(measure_);
            double final = quantity_ + v2.quantity_;
            SetMeasure(measure_);
            SetQuantity(final);
    }
}
