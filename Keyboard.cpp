//
// Created by Endi on 27.02.2024.
//

#include "Keyboard.h"
#include "Printable.h"
#include <iostream>
#include <fstream>
using namespace std;

int Keyboard::set_product_number(int product_number) {
    return this->product_number=product_number;
}
int Keyboard::get_product_number() const {
    return product_number;
}
string Keyboard::set_name(string name)
{
    return this->name=name;
}
string Keyboard::get_name() const
{
    return name;
}
float Keyboard::set_weight(float weight)
{
    return this->weight=weight;
}
float Keyboard::get_weight() const
{
    return weight;
}
string Keyboard::set_typeOfMaterial(string type_of_material)
{

    return this->type_of_material=type_of_material;
}
string Keyboard::get_typeOfMaterial() const
{
    return type_of_material;
}
float Keyboard::set_price(float price) {
    return this->price=price;
}
float Keyboard::get_price() const {
    return price;
}

void Keyboard::writeProduct() {
    ofstream file("C:\\Users\\Endi\\CLionProjects\\DevicesOOP\\files\\Products.txt", ios::app);
    string data=to_string(product_number)+","+name+","+ to_string(weight)+","+type_of_material+","+to_string(price);
    file<<data;
    file.close();

}


void Keyboard::print(std::ostream &os) const {
    os<<endl<<"---Товар: Клавіатура---"<<endl
        <<"Номер товару: "<<product_number<<endl
        <<"Назва: "<<name<<endl
        <<"Вага: "<<weight<<endl
        <<"Матеріал: "<<type_of_material<<endl
        <<"Ціна: "<<price<<endl;
}

void Keyboard::readData(std::istream &is) {

    cout<<"Введіть номер товару: ";
    is >> product_number;

    cout<<"Введіть назву клавіатури: ";
    is >> name;
    cout<<"Введіть вагу клавіатури: ";
    is >> weight;
    cout<<"Введіть матеріал клавіатури: ";
    is >> type_of_material;
    cout<<"Введіть ціну клавіатури: ";
    is >> price;
}

Keyboard::Keyboard(const Keyboard &other) {
    product_number=other.product_number;
    name = other.name;
    weight = other.weight;
    type_of_material = other.type_of_material;
    price = other.price;
    cout<<"called copy constructor"<<endl;
}

Keyboard::Keyboard(int product_number,string &&name, float weight,string &&type_of_material,float price):
    product_number{product_number},name{name}, weight{weight}, type_of_material{type_of_material},price{price}
{
    //cout<<"called Keyboard constructor"<<endl;
}

Keyboard::~Keyboard()
{
    //cout<<"called Keyboard destructor"<<endl;
}