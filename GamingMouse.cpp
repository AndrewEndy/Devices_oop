//
// Created by Endi on 29.02.2024.
//

#include "GamingMouse.h"
#include "Mouse.h"
#include <iostream>

int GamingMouse::set_AdditionalButtons(int AdditionalButtons) {
    return this->AdditionalButtons=AdditionalButtons;
}
int GamingMouse::get_AdditionalButtons() {
    return AdditionalButtons;
}
bool GamingMouse::set_rgb(bool rgb) {
    return this->rgb=rgb;
}
bool GamingMouse::get_rgb() {
    return rgb;
}
void GamingMouse::info() {
    Mouse::info();
    cout<<"Кількість додаткових кнопок: "<<AdditionalButtons<<endl;
    cout<<"RGB підсвітка: "<<rgb<<endl;
}

void GamingMouse::doSomething() const {
    cout<<"GamingMouse"<<endl;
}

void GamingMouse::print(std::ostream &os) const {
    Mouse::print(os);
    os<<"Кількість додаткових кнопок: "<<AdditionalButtons<<endl;
    os<<"RGB підсвітка: "<<rgb<<endl;
}

void GamingMouse::print_class_name() const {
    cout<<"Class name: GamingMouse"<<endl;
}

GamingMouse &GamingMouse::operator=(const GamingMouse &other) {
    if(this!=&other){
        Mouse::operator=(other);
        AdditionalButtons=other.AdditionalButtons;
        rgb=other.rgb;
    }
    return *this;
}

GamingMouse::GamingMouse(std::string name, float weight, std::string typeOfMaterial, bool wireless,int AAdditionalButtons, bool rgb):
        Mouse{string{name},float{weight},string{typeOfMaterial},bool{wireless} }
{
    this->AdditionalButtons=AAdditionalButtons;
    this->rgb=rgb;
    cout<<"GamingMouse constructor"<<endl;
}
GamingMouse::~GamingMouse() {
    cout<<"GamingMouse destructor"<<endl;
}