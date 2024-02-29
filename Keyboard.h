//
// Created by Endi on 27.02.2024.
//

#ifndef DEVICESOOP_KEYBOARD_H
#define DEVICESOOP_KEYBOARD_H


#include <iostream>
using namespace std;
class Keyboard {


private:
    string name;
    float weight;
    string type_of_material;

public:
    void set_name();
    void get_name()const;
    void set_TypeOfMaterial();
    void get_TypeOfMaterial()const;
    void set_weight();
    void get_weight()const;
    void info()const;

    Keyboard();
    Keyboard(string &&name);
    Keyboard(string &&name, float weight);
    Keyboard(string &&name, float weight, string &&type_of_material);

    Keyboard(const Keyboard &other);


    ~Keyboard();
};


#endif //DEVICESOOP_KEYBOARD_H
