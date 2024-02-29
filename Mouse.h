//
// Created by Endi on 27.02.2024.
//

#ifndef DEVICESOOP_MOUSE_H
#define DEVICESOOP_MOUSE_H


#include <iostream>

using namespace std;
class Mouse {

private:
    string name;
    float weight;
    string type_of_material;
    bool wireless;
    static int AmountOfMice;

public:
    void set_name();
    void get_name();
    void set_weight();
    void get_weight();
    void set_TypeOfMaterial();
    void get_TypeOfMaterial();
    void set_wireless();
    void get_wireless();
    void info();
    void get_amountOfMice();

    friend std::ostream  &operator<<(std::ostream &os, const Mouse &mouse);
    friend std::istream &operator>>(std::istream &is, Mouse &mouse);

    Mouse &operator=(const Mouse &other);
    Mouse operator+(float num);
    Mouse operator-(float num);
    Mouse operator+=(float num);
    Mouse operator-=(float num);

    Mouse operator--();
    Mouse operator++();

    Mouse();
    Mouse(string NameOfMouse);
    Mouse(string NameOfMouse, float Weight);
    Mouse(string NameOfMouse, float Weight, string TypeOfMaterial);
    Mouse(string NameOfMouse, float Weight, string TypeOfMaterial, bool Wireless);
    ~Mouse();
};


#endif //DEVICESOOP_MOUSE_H
