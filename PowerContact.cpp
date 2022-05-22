//
// Created by User on 21.05.2022.
//


#include <iostream>
#include "PowerContact.h"

using namespace std;
double PowerContact::getPower() const {
    return this->power;
}

PowerContact::PowerContact(Device *device, int x, int y, int contact_num, int plate_num, double power) {
    this->setX(x);
    this->setY(y);
    this->setPlateNum(plate_num);
    this->setContactNum(contact_num);
    this->setDevice(device);
    this->power=power;
}

void PowerContact::print() {
    cout << "Power Contact Info:" << endl;
    cout << "\tposition:      [" << this->getX() << ", " << this->getY() << "]" << endl;
    cout << "\tContact number: " << this->getContactNum() << endl;
    cout << "\tDevice Name:    " << this->getDevice()->getName() << endl;
    cout << "\tPower:          " << this->power << endl;
}

