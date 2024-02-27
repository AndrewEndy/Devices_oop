//
// Created by Endi on 27.02.2024.
//

#include "Keyboard.h"
#include <iostream>

void Keyboard::set_name()
{
    cout<<"Введіть назву клавіатури: ";
    string NAME;
    cin>>NAME;
    name=NAME;
}
void Keyboard::get_name()
{
    cout<<"Назва клавіатури: "<<name<<endl;
}
void Keyboard::set_TypeOfMaterial()
{
    cout<<"Введіть тип матеріалу клавіатури: ";
    string TYPE;
    cin>>TYPE;
    type_of_material=TYPE;
}
void Keyboard::get_TypeOfMaterial()
{
    cout<<"Тип матеріала клавіатури: "<<type_of_material<<endl;
}
void Keyboard::set_weight()
{
    cout<<"Введіть вагу клавіатури: ";
    float WEIGHT;
    cin>>WEIGHT;
    weight=WEIGHT;
}
void Keyboard::get_weight()
{
    cout<<"Вага клавіатури: "<<weight<<" кг"<<endl;
}
void Keyboard::info()
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
}
Keyboard::Keyboard(std::string &&NameOfKeyboard)
{
    name=NameOfKeyboard;
    weight=0;
    type_of_material="None";
}
Keyboard::Keyboard(std::string &&NameOfKeyboard, float Weight)
{
    name=NameOfKeyboard;
    weight=Weight;
    type_of_material="None";
}
Keyboard::Keyboard(std::string &&NameOfKeyboard, float Weight, std::string &&NameTypeOfMaterial)
{
    name=NameOfKeyboard;
    weight=Weight;
    type_of_material=NameTypeOfMaterial;
}
Keyboard::~Keyboard()
{
    cout<<"called Keyboard destructor"<<endl;
}