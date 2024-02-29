//
// Created by Endi on 27.02.2024.
//

#include "Mouse.h"
#include <iostream>
int Mouse::AmountOfMice=0;
void Mouse::set_name()
{
    cout<<"Введіть назву мишки: ";
    string NAME;
    cin>>NAME;
    name=NAME;
}
void Mouse::get_name()
{
    cout<<"Назва мишки: "<<name<<endl;
}
void Mouse::set_weight()
{
    cout<<"Введіть вагу мишки: ";
    float WEIGHT;
    cin>>WEIGHT;
    weight=WEIGHT;
}
void Mouse::get_weight()
{
    cout<<"Вага мишки: "<<weight<<" кг"<<endl;
}
void Mouse::set_TypeOfMaterial()
{
    cout<<"Введіть тип матеріалу мишки: ";
    string TYPE;
    cin>>TYPE;
    type_of_material=TYPE;
}
void Mouse::get_TypeOfMaterial()
{
    cout<<"Тип матеріалу мишки: "<<type_of_material<<endl;
}
void Mouse::set_wireless()
{
    int WIRELESS;
    cout<<"Провідна чи безпроводна мишка (1-провідна, 0-безпровідна): ";
    cin>>WIRELESS;
    if (WIRELESS==1)
    {
        wireless=true;
    }
    else
    {
        wireless=false;
    }
}
void Mouse::get_wireless()
{
    if (wireless==true)
    {
        cout<<"Мишка провідна"<<endl;
    }
    else
    {
        cout<<"Мишка безпровідна"<<endl;
    }
}
void Mouse::info()
{
    cout<<"Назва мишки: "<<name
        <<"\nВага мишки: "<<weight<<" кг"
        <<"\nТип матеріалу мишки: "<<type_of_material
        <<"\nМишка провідна: "<<wireless<<endl<<endl;
}

void Mouse::get_amountOfMice() {
    cout<<"Кількість мишок: "<<AmountOfMice<<endl;
}

std::ostream &operator<<(std::ostream &os, const Mouse &mouse) {
    os << "Назва мишки: " <<mouse.name  << endl;
    os << "Вага мишки: " <<mouse.weight  << endl;
    os << "Тип матеріалу мишки: "<< mouse.type_of_material<<endl;
    os << "Провідна: "<<mouse.wireless<<endl;
    return os;
}
std::istream &operator>>(std::istream &is, Mouse &mouse) {
    cout<<"Введіть назву мишки: ";
    is >> mouse.name;
    cout<<"Введіть вагу мишки: ";
    is >> mouse.weight;
    cout<<"Введіть тип матеріалу мишки: ";
    is >> mouse.type_of_material;
    cout<<"Провідна true/false: ";
    is >> mouse.wireless;
    return is;
}
Mouse &Mouse::operator=(const Mouse &other){
    name=other.name;
    weight=other.weight;
    type_of_material=other.type_of_material;
    wireless=other.wireless;
    return  *this;
}
Mouse Mouse::operator+(float num) {
    weight+=num;
    return *this;
}
Mouse Mouse::operator-(float num) {
    weight-=num;
    return *this;
}
Mouse Mouse::operator+=(float num) {
    weight+=num;
    return *this;
}
Mouse Mouse::operator-=(float num) {
    weight-=num;
    return *this;
}
Mouse Mouse::operator--(){
    if(weight<0.1){
        weight=0;
        return *this;
    }
    weight-=0.100;
    return *this;
}
Mouse Mouse::operator++() {
    weight+=0.100;
    return *this;
}
Mouse::Mouse()
{
    AmountOfMice++;
    name="None";
    weight=0;
    type_of_material="None";
    wireless= false;
}
Mouse::Mouse(std::string NameOfMouse): Mouse()
{
    name=NameOfMouse;

}
Mouse::Mouse(std::string NameOfMouse, float Weight):Mouse(NameOfMouse)
{
    weight=Weight;
}
Mouse::Mouse(std::string NameOfMouse, float Weight, std::string NameTypeOfMaterial):Mouse(NameOfMouse,  Weight) {
    type_of_material=NameTypeOfMaterial;
}
Mouse::Mouse(std::string NameOfMouse, float Weight, std::string NameTypeOfMaterial, bool Wireless):Mouse(NameOfMouse,  Weight,  NameTypeOfMaterial) {
    wireless=Wireless;
}
Mouse::~Mouse() {
    AmountOfMice--;
    cout<<"called Mouse destructor"<<endl;
}