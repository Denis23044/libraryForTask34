#ifndef LIBRARY_FOR_TASK34_LIBRARY_H
#define LIBRARY_FOR_TASK34_LIBRARY_H

#include "Contact.h"
#include "ContactData.h"
#include "PowerContact.h"
#include "Plate.h"

extern "C"{
Plate * create_plate(double x1=0, double x2=0, double y1=0, double y2=0, int plateNumber=1);
void delete_plate(Plate *plate);
int add_contact_data(Plate *plate, Device *device, int x=0, int y=0, int contact_num=0, int plate_num=0, const string& name="def");
int add_power_contact(Plate *plate, Device *device, int x=0, int y=0, int contact_num=0, int plate_num=0, double power=0);
int remove_contact(Plate *plate, int x, int y);
void contact_info(Contact *contact);
void plate_info(Plate *plate);
Device * create_device(string name);
void delete_device(Device *device);
};




#endif //LIBRARY_FOR_TASK34_LIBRARY_H
