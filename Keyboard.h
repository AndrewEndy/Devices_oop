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
    void get_name();
    void set_TypeOfMaterial();
    void get_TypeOfMaterial();
    void set_weight();
    void get_weight();
    void info();

    Keyboard();
    Keyboard(string &&NameOfKeyboard);
    Keyboard(string &&NameOfKeyboard, float Weight);
    Keyboard(string &&NameOfKeyboard, float Weight, string &&NameTypeOfMaterial);
    ~Keyboard();
};


#endif //DEVICESOOP_KEYBOARD_H
