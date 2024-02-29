//
// Created by Endi on 27.02.2024.
//

#include "Keyboard.h"
#include <iostream>

void Keyboard::set_name()
{
    cout<<"Введіть назву клавіатури: ";
    string name;
    cin>>name;
    this->name=name;
}
void Keyboard::get_name() const
{
    cout<<"Назва клавіатури: "<<name<<endl;
}
void Keyboard::set_TypeOfMaterial()
{
    cout<<"Введіть тип матеріалу клавіатури: ";
    string type_of_material;
    cin>>type_of_material;
    this->type_of_material=type_of_material;
}
void Keyboard::get_TypeOfMaterial() const
{
    cout<<"Тип матеріала клавіатури: "<<type_of_material<<endl;
}
void Keyboard::set_weight()
{
    cout<<"Введіть вагу клавіатури: ";
    float weight;
    cin>>weight;
    this->weight=weight;
}
void Keyboard::get_weight() const
{
    cout<<"Вага клавіатури: "<<weight<<" кг"<<endl;
}
void Keyboard::info() const
{
    cout<<"Назва клавіатури: "<<name
        <<"\nВага клавіатури: "<<weight<<" кг"
        <<"\nТип матеріалу клавіатури: "<<type_of_material<<endl<<endl;
}

Keyboard::Keyboard()
{
    name="None";
    weight=0;
    type_of_material="None";
    cout<<"called base constructor"<<endl;
}
Keyboard::Keyboard(std::string &&name)
{
    this->name=name;
    weight=0;
    type_of_material="None";
    cout<<"called base constructor"<<endl;
}
Keyboard::Keyboard(std::string &&name, float weight)
{
    this->name=name;
    this->weight=weight;
    type_of_material="None";
    cout<<"called base constructor"<<endl;
}
Keyboard::Keyboard(std::string &&name, float weight, std::string &&type_of_material)
{
    this->name=name;
    this->weight=weight;
    this->type_of_material=type_of_material;
    cout<<"called base constructor"<<endl;
}
Keyboard::Keyboard(const Keyboard &other) {
    name = other.name;
    weight = other.weight;
    type_of_material = other.type_of_material;
    cout<<"called copy constructor"<<endl;
}

Keyboard::~Keyboard()
{
    cout<<"called Keyboard destructor"<<endl;
}