// Copyright 2022 Brian Bongermino

#include<iostream>
#include<fstream>
#include<string>
using std::cout;
using std::cin;
using std::endl;

int main() {
    int iqv;
    int iqvmax;
    int iqvmin;
    int i = 0;
    int sum = 0;
    std::string ic, icmax, icmin;
    std::ifstream inventory("inventory.txt");
    inventory >> ic >> iqv;
    while (inventory.good()) {
        if (iqv > iqvmax || i == 0) {
            iqvmax = iqv;
            icmax = ic;
        } else if (iqv < iqvmin || i == 0) {
            iqvmin = iqv;
            icmin = ic;
        }
        ++i;
        sum = sum + iqv;
        inventory >> ic >> iqv;
    }
    cout << "Highest inventory item: " << icmax << " "
    << "quanity: " << iqvmax << endl;
    cout << "Lowest inventory item: " <<  icmin << " "
    << "quanity: " << iqvmin << endl;
    std::cout <<  "Total inventory: " << sum << endl;
    inventory.close();
    return 0;
}
