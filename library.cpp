#include "library.h"

extern "C"{

Plate *create_plate(double x1, double x2, double y1, double y2, int plateNumber) {
    return ( new Plate(x1, x2, y1, y2, plateNumber) );
}
void delete_plate(Plate *plate){
    delete plate;
}
int add_contact_data(Plate *plate, Device *device, int x, int y, int contact_num, int plate_num, const string& name) {
    ContactData *contact =new ContactData(device, x, y, contact_num, plate_num, name);
    return plate->addContact(contact);
}
int add_power_contact(Plate *plate, Device *device, int x, int y, int contact_num, int plate_num, double power) {
    PowerContact *contact =new PowerContact(device, x, y, contact_num, plate_num, power);
    return plate->addContact(contact);
}
int remove_contact(Plate *plate, int x, int y) {
    //Не смог найти информацию (ну, либо просто не понял), удалит ли Plate.cpp:272
    // this->contacts.erase(this->contacts.begin()+i);
    //Лежащий там объект Contact или нет.
    //Пока оставлю так, если что, нужно будет прописать вручную удаление объекта
    return plate->removeContact(x,y);
}
void contact_info(Contact *contact){
    contact->print();
}
void plate_info(Plate *plate) {
    plate->print();
}
Device * create_device(string name) {
    return new Device(name);
}
void delete_device(Device *device) {
    delete device;
}


}



#include <iostream>


